# Aula 05 — Projeto Arena Tech

## Objetivo
Desenvolver um programa em C para estimar a viabilidade de um evento de jogos, considerando participantes, equipes, computadores, consumo de energia, custos e orçamento.

## Arquivo
| Arquivo | Descrição |
|---|---|
| `projeto_arena_tech.c` | Calcula indicadores do evento e apresenta um relatório com recomendação final. |

## Conceitos praticados
- Variáveis inteiras e reais.
- Entrada e saída com `scanf` e `printf`.
- Operações aritméticas.
- Estruturas condicionais `if`, `else if` e `else`.
- Cálculo de consumo de energia e custos.
- Comparação entre orçamento e despesas.

## Funcionamento
O programa solicita os dados do evento e calcula a quantidade de equipes, consumo estimado em kWh, custos de energia e alimentação, custo total, custo por participante e saldo do orçamento. Ao final, apresenta a situação da infraestrutura, do orçamento e uma recomendação.

## Compilação e execução
Na raiz do repositório:

```bash
gcc "AULA 05/projeto_arena_tech.c" -o arena_tech
```

Windows: `arena_tech.exe`  
Linux/macOS: `./arena_tech`

## Ponto de revisão
Valide os valores de participantes e jogadores por equipe para evitar divisão por zero. Também revise as mensagens de saída e os limites da classificação de consumo.

## Finalidade acadêmica
Atividade para praticar cálculos, lógica de programação e tomada de decisão com estruturas condicionais.
