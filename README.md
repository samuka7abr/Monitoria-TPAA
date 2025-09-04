# 📚 Monitoria - Técnicas de Programação e Algoritmos Avançados

> Repositório oficial da monitoria de TPAA - 4° Semestre IDP

## 📖 Conteúdos

### A1 - Fundamentos
- **Notação Assintótica** (Partes 1, 2 e 3)
- **C++ Avançado** (Partes 1 e 2)
- **Listas, Pilhas e Filas**
- **Busca e Ordenação** (Partes 1, 2, 3 e 4)

### A2 - Estruturas Avançadas
- **Árvores Binárias e de Busca** (Partes 1 e 2)
- **Heaps**
- **Hashes**
- **Grafos** (Partes 1 e 2)
- **Busca Completa e Programação Dinâmica** (Partes 1, 2 e 3)

## 📁 Slides

Todos os slides estão organizados nas pastas:
- [`slides/A1/`](slides/A1/) - Conteúdos do primeiro período
- [`slides/A2/`](slides/A2/) - Conteúdos do segundo período

## 🛠️ Scripts de Automação

O repositório inclui um **sistema completo de automação** para gerenciar listas de exercícios:

### 🚀 Script Gerador
```bash
./comandos/gerador.sh
```
- Cria toda a estrutura de pastas (A1/A2, listas_casa/listas_sala, provas)
- Gera todos os scripts de automação automaticamente

### 📝 Scripts Disponíveis

| Script | Função |
|--------|--------|
| `lista.sh` | Cria estrutura completa para nova lista (pastas, templates C++, arquivos de teste) |
| `run.sh` | Compila e executa código C++, compara saída com esperada |
| `commit.sh` | Padroniza commits com prefixos (Study, Docs, LEE, LEA, Refactoring) |
| `exclui.sh` | Remove arquivos executáveis gerados durante compilação |

### 🎯 Como Usar

1. **Gerar estrutura inicial:**
   ```bash
   cd comandos && ./gerador.sh
   ```

2. **Criar nova lista:**
   ```bash
   ./comandos/lista.sh
   # Escolha: casa/sala, número da lista, quantidade de questões
   ```

3. **Executar exercício:**
   ```bash
   ./comandos/run.sh
   # Digite: C/S num_lista num_questao
   ```

4. **Fazer commit:**
   ```bash
   ./comandos/commit.sh
   # Escolha tipo e mensagem
   ```

---

<div align="center">

## 👨‍💻 Monitores

<table>
  <tr>
    <td align="center">
      <a href="https://github.com/Falizz">
        <img src="https://github.com/Falizz.png" width="100px;" alt="Falizz" style="border-radius: 50%;
        border: solid 2px white"/>
        <br />
        <sub><b style="font-size: 16px;">Fábio Luís</b></sub>
      </a>
      <br />
      <a href="https://github.com/Falizz" style="font-size: 12px;" title="GitHub">GitHub</a>
    </td>
    <td align="center">
      <a href="https://github.com/samuka7abr">
        <img src="https://github.com/samuka7abr.png" width="100px;" alt="Samuel Abrão" style="border-radius: 50%;
        border: solid 2px white"/>
        <br />
        <sub><b style="font-size: 16px;">Samuel Abrão</b></sub>
      </a>
      <br />
      <a href="https://github.com/samuka7abr" style="font-size: 12px;" title="GitHub">GitHub</a>
      <br />
    </td>
  </tr>
</table>

</div>

---

<div align="center">
  <p><strong>💡 Dúvidas? Entre em contato conosco!</strong></p>
  <p>Desenvolvido com ❤️ pelos monitores de TPAA</p>
</div>                                                                          

