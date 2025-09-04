#!/bin/bash

cd ..

echo "Iniciando a construção da estrutura de pastas e scripts básicos..."

# --- Estrutura A1 ---
mkdir -p A1/listas_casa
mkdir -p A1/listas_sala
mkdir -p A1/prova_1 # Mantendo a pasta da prova_1, pois não é uma lista dinâmica

# --- Estrutura A2 ---
mkdir -p A2/listas_casa
mkdir -p A2/listas_sala
mkdir -p A2/prova_2 # Mantendo a pasta da prova_2, pois não é uma lista dinâmica


# exclui.sh
cat << 'EOF' > comandos/exclui.sh
#!/bin/bash

# Este script remove arquivos executáveis nomeados como "exec"
# Ele busca dentro do diretório do projeto.
# ATENÇÃO: Verifique o caminho TARGET_DIR para garantir que está correto para seu ambiente.
TARGET_DIR="/home/samuelabrao/VSCODE/IDP/3° Semestre/TPAA-IDP"

echo "Buscando e removendo arquivos 'exec' em: $TARGET_DIR"
find "$TARGET_DIR" -type f -name "exec" -exec rm -v {} +

echo "Remoção finalizada."
EOF
chmod +x comandos/exclui.sh

# lista.sh
cat << 'EOF' > comandos/lista.sh
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

base_dir="A2/listas_${tipo}/lista${numero}" # Note que aqui está fixo em A2, talvez você queira flexibilizar para A1 também.

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
EOF
chmod +x comandos/lista.sh

# run.sh
cat << 'EOF' > comandos/run.sh
#!/bin/bash

# Este script executa um programa C++ e compara sua saída com a esperada.
# Ele espera ser executado a partir do diretório 'comandos' ou similar,
# pois ele sobe um nível para a raiz do projeto.
cd "$(dirname "$0")/.."

read -p "Digite (C/S) num_lista num_questao: " tipo numero questao
tipo=$(echo "$tipo" | tr '[:upper:]' '[:lower:]')

if [ "$tipo" == "c" ]; then
  tipo="casa"
elif [ "$tipo" == "s" ]; then
  tipo="sala"
else
  echo "Erro: Tipo inválido. Use C para casa ou S para sala."
  exit 1
fi

base_dir="A2/listas_${tipo}/lista${numero}/$(printf '%02d' "$questao")" # Note aqui o A2 fixo

if [ ! -d "$base_dir" ]; then
  echo "Erro: Pasta da questão não encontrada em $base_dir"
  exit 1
fi

# Converte o número da questão para letra (1=A, 2=B, etc.)
file_letter=$(printf "\\$(printf '%03o' $((64 + questao)))")

echo "Compilando $base_dir/${file_letter}.cpp..."
g++ "$base_dir/${file_letter}.cpp" -o "$base_dir/exec"

echo "Executando e comparando saídas..."
"$base_dir/exec" < "$base_dir/args/input" > "$base_dir/args/output"

if diff -p <(sed 's/[[:space:]]\+$//' "$base_dir/args/output") \
          <(sed 's/[[:space:]]\+$//' "$base_dir/args/expected"); then
  echo -e "\033[1;32mSucesso: As saídas coincidem!\033[0m"
else
  echo -e "\033[1;31mErro: Saídas diferentes!\033[0m"
  # Para ver as diferenças mais claramente
  echo "--- Diff ---"
  diff "$base_dir/args/output" "$base_dir/args/expected"
  echo "------------"
fi
EOF
chmod +x comandos/run.sh

# commit.sh
cat << 'EOF' > comandos/commit.sh
#!/bin/bash
# Script para padronizar mensagens de commit.
# Navega para a raiz do repositório Git.
cd "$(dirname "$0")"/..

echo "Preparando commit em: $(pwd)"
echo "Selecione o tipo de commit:"
echo "1 - Study (Estudos, testes, anotações)"
echo "2 - Docs (Documentação, READMEs, comentários)"
echo "3 - LEE (Implementação/correção de Lista de Exercícios de Casa)"
echo "4 - LEA (Implementação/correção de Lista de Exercícios de Sala)"
echo "5 - Refactoring (Refatoração de código)"
read -p "Digite o número correspondente: " tipo

case $tipo in
  1) prefixo="Study" ;;
  2) prefixo="Docs" ;;
  3) prefixo="LEE" ;;
  4) prefixo="LEA" ;;
  5) prefixo="Refactoring" ;;
  *) echo "Tipo de commit inválido. Saindo."
     exit 1 ;;
esac

read -p "Mensagem do commit (curta e descritiva): " msg
if [ -z "$msg" ]; then
  echo "A mensagem do commit não pode estar vazia. Por favor, forneça uma mensagem."
  exit 1
fi

echo "Adicionando todos os arquivos modificados/novos ao stage..."
git add .
echo "Criando commit: \"$prefixo: $msg\""
git commit -m "$prefixo: $msg" || {
  echo "Erro ao tentar commitar. Verifique se há alterações a serem commitadas ou regras de pre-commit."
  exit 1
}
echo "Enviando alterações para o repositório remoto..."
git push || {
  echo "Erro ao tentar enviar as alterações (push). Verifique sua conexão ou permissões."
  exit 1
}
echo "Commit e push concluídos com sucesso!"
EOF
chmod +x comandos/commit.sh


echo "Estrutura básica de pastas e scripts criada com sucesso!"
echo "As subpastas das listas (ex: lista1, 01, args) serão criadas pelos scripts 'lista.sh' e 'prova.sh'."
