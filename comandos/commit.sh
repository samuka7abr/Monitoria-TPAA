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
