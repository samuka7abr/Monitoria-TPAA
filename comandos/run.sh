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

base_dir="A1/listas_${tipo}/lista${numero}/$(printf '%02d' "$questao")" # Note aqui o A2 fixo

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
