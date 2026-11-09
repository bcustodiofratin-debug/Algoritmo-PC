# Aula 10 — Funções, ponteiros e estruturas

## Objetivo
Praticar a divisão de programas em funções, passagem de parâmetros, manipulação de endereços de memória e organização de dados com `struct`.

## Arquivos
| Arquivo | Conteúdo principal |
|---|---|
| `exemplo01_calcular_area_retangulo.c` | Função para calcular a área de um retângulo. |
| `exercicio01_calcular_frete.c` | Cálculo de frete a partir do peso. |
| `exercicio02_trocar_valores_ponteiros.c` | Troca de valores utilizando ponteiros. |
| `exercicio03_calcular_media_situacao.c` | Cálculo da média e análise da situação do aluno. |
| `exercicio04_calcular_area_loop.c` | Repetição de cálculos de área com função. |
| `exercicio05_calcular_media_struct.c` | Armazenamento de dados de aluno com `struct`. |

## Conceitos praticados
- Criação e chamada de funções.
- Parâmetros e valores de retorno.
- Reutilização e organização de código.
- Ponteiros e operadores `*` e `&`.
- Passagem de endereços para funções.
- Definição e acesso aos membros de uma `struct`.

## Compilação e execução
Exemplo a partir da raiz do repositório:

```bash
gcc "AULA 10/exemplo01_calcular_area_retangulo.c" -o area_retangulo
```

Windows: `area_retangulo.exe`  
Linux/macOS: `./area_retangulo`

Compile um arquivo por vez, pois cada exercício possui sua própria função `main`.

## Pontos de revisão
No exercício de ponteiros, utilize variáveis inteiras válidas, leia seus valores e passe seus endereços para a função. Não utilize ponteiros sem apontá-los para uma área de memória válida. No exercício com `struct`, confira se o tipo de retorno das funções corresponde ao valor retornado.

## Finalidade acadêmica
Consolidar a modularização e introduzir recursos importantes para organização e manipulação de dados em C.
