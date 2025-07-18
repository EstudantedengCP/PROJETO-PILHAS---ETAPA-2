# 🧠 Interpretador REPL com Pilha (C)
etapa 1
Este projeto implementa um interpretador interativo (REPL) baseado em **estrutura de pilha**, com comandos simples simulando operações de máquina virtual
\n
etapa 2 
Atividade: Máquina Virtual Baseada em Pilha — Etapa 2 Descrição: 🎯 Objetivo Ampliar a funcionalidade do interpretador da máquina virtual baseado em pilha, implementando uma memória de variáveis usando uma lista encadeada. Esta etapa introduz o uso de variáveis nomeadas e operações entre elas.

🧠 Conceitos Praticados Implementação e uso de lista encadeada Armazenamento e atualização de variáveis Integração entre estruturas de dados: pilha e lista

## 👨‍👩‍👧‍👦 Integrantes
- ITALO FERNANDES MENDES COSTA
- JOSE AUGUSTO SANTOS LOPES
- MAYRLA FERREIRA RODRIGUES MENDES
- THARCILA BIANCA DOS SANTOS FERREIRA

## ⚙️ Compilação
```bash
gcc main.c stack.c interpret.c -o interpretador
```

## ▶️ Execução
```bash
./interpretador
```

## ⌨️ Comandos disponíveis
- `push <valor>` → Empilha um valor
- `pop` → Desempilha o topo
- `add`, `sub`, `mul`, `div` → Operações aritméticas com os dois valores do topo
- `print` → Exibe os valores da pilha
- `exit` → Encerra o interpretador

## 📚 Instruções da atividade
Acesse: [Notion do Professor](https://profsergiocosta.notion.site/Laborat-rio-Um-REPL-para-uma-m-quina-baseada-em-pilha-31614c015b68430c864077eb25d214b2)
