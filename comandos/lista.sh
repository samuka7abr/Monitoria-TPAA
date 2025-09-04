#!/bin/bash

# Este script cria a estrutura de pastas e arquivos para uma nova lista de exercícios.
# Ele espera ser executado a partir do diretório 'comandos' ou similar,
# pois ele sobe um nível para a raiz do projeto.
cd "$(dirname "$0")/.."

read -p "A lista é pra casa ou sala? (c/s): " tipo
read -p "Número da lista: " numero
read -p "Quantas questões? " questoes

tipo=$(echo "$tipo" | tr '[:upper:]' '[:lower:]')
if [ "$tipo" == "c" ]; then
  tipo="casa"
elif [ "$tipo" == "s" ]; then
  tipo="sala"
else
  echo "Erro: Tipo inválido. Use 'c' para casa ou 's' para sala."
  exit 1
fi

base_dir="A1/listas_${tipo}/lista${numero}" # Note que aqui está fixo em A2, talvez você queira flexibilizar para A1 também.

echo "Criando estrutura para $base_dir com $questoes questões..."
mkdir -p "$base_dir"

template_code='#include <bits/stdc++.h>
using namespace std;
#define otim ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
const int INF_INT = 1e9;
const ll INF_LL = 1e18; 
const int MOD = 1000000007;

int main(){
    otim;
    
    return 0;
}'

for ((i=1; i<=questoes; i++)); do
  pasta_num=$(printf "%02d" "$i")
  # Converte o número para letra (1=A, 2=B, etc.)
  letra=$(printf "\\$(printf '%03o' $((64 + i)))") 

  mkdir -p "$base_dir/$pasta_num"
  echo "$template_code" > "$base_dir/$pasta_num/${letra}.cpp"

  mkdir -p "$base_dir/$pasta_num/args"
  touch "$base_dir/$pasta_num/args/input"
  touch "$base_dir/$pasta_num/args/expected"
done

mkdir -p "$base_dir/questoes" # Cria a pasta de questões, sem PDFs

echo "Lista criada com sucesso em: $base_dir"
