# Guia de Consulta Rápido para Maratonas de Programação

Este repositório contém um guia de consulta rápida com códigos essenciais para a P1 de TPAA. Você pode clonar este repositório e personalizá-lo com seus próprios códigos.

### Opção 1: Clonar o Repositório
```bash
git clone https://github.com/samuka7abr/guia-prova-01-TPAA.git
cd guia-prova-01-TPAA
```

### Opção 2: Fazer Fork (Recomendado)
1. Clique no botão "Fork" no GitHub
2. Clone seu fork:
```bash
git clone https://github.com/<seu_user>/guia-prova-01-TPAA.git
cd guia-prova-01-TPAA
```

## 📋 Pré-requisitos

Instale o codes2pdf globalmente:
```bash
sudo npm install -g codes2pdf
```

## 📖 Como Usar

### Gerar o PDF
Para gerar o documento PDF com todos os códigos:
```bash
make
```

### Adicionar Seus Próprios Códigos
1. Adicione seus arquivos `.cpp` nas pastas apropriadas:
   - `01-utilidades/` - Códigos utilitários básicos
   - `02-manipulacao-binaria/` - Operações bitwise
   - `03-matematica/` - Algoritmos matemáticos
   - `04-busca-binaria/` - Implementações de busca binária
   - `05-Estruturas-de-Dados/` - Estruturas de dados (vector, stack, queue, etc.)
    > (se precisar adicionar alguma pasta, só adicionar nessa estrutura:)
    >
    > "numero" "-" "nome da pasta"

2. Execute `make` para regenerar o PDF com seus códigos

### Estrutura do Projeto
- Cada pasta contém códigos relacionados a um tópico específico
- Os arquivos `.cpp` devem conter código mínimo e funcional
- O Makefile automaticamente inclui todos os arquivos `.cpp` no PDF gerado

## 📝 Dicas
- Mantenha os códigos concisos e bem comentados
- Use nomes de arquivos descritivos
- Teste seus códigos antes de adicionar ao repositório

