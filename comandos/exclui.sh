#!/bin/bash

# Este script remove arquivos executáveis nomeados como "exec"
# Ele busca dentro do diretório do projeto.
# ATENÇÃO: Verifique o caminho TARGET_DIR para garantir que está correto para seu ambiente.
TARGET_DIR="/home/samuelabrao/VSCODE/IDP/3° Semestre/TPAA-IDP"

echo "Buscando e removendo arquivos 'exec' em: $TARGET_DIR"
find "$TARGET_DIR" -type f -name "exec" -exec rm -v {} +

echo "Remoção finalizada."
