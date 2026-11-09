# Aula 10.1 — Projeto de análise de consumo dos laboratórios

## Objetivo
Desenvolver um relatório de consumo de energia de quatro laboratórios ao longo de sete dias, utilizando matrizes e funções em C.

## Arquivo
| Arquivo | Descrição |
|---|---|
| `Projeto 10.1.c` | Processa os dados e apresenta indicadores gerais, por laboratório e por dia. |

## Conceitos praticados
- Constantes com `#define`.
- Vetores para representar dias e laboratórios.
- Matrizes para armazenar os valores de consumo.
- Funções para separar e reutilizar cálculos.
- Laços de repetição para percorrer linhas e colunas.
- Acumuladores, médias e busca de valores máximos.
- Contagem de registros acima de um limite.

## Funcionamento
A matriz possui quatro linhas (laboratórios) e sete colunas (dias). O programa calcula o consumo total geral, a média de cada laboratório, o dia com maior consumo, o laboratório com maior consumo semanal e a quantidade de registros acima de 100 kWh. Os valores são definidos no próprio código.

## Compilação e execução
Na raiz do repositório:

```bash
gcc "AULA 10.1/Projeto 10.1.c" -o relatorio_laboratorios
```

Windows: `relatorio_laboratorios.exe`  
Linux/macOS: `./relatorio_laboratorios`

## Finalidade acadêmica
Integrar matrizes, funções e estruturas de repetição na construção de um relatório de análise de dados.
