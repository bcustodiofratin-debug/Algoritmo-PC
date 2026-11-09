# Aula 09 — Manipulação de arquivos em C

## Objetivo
Praticar a criação, gravação, leitura e análise de informações armazenadas em arquivos de texto.

## Arquivos
| Arquivo | Descrição |
|---|---|
| `exemplo01_criar_ficheiro_tabuada.c` | Cria `tabuada.txt` e grava a tabuada de um número. |
| `exercicio02_anexar_dados_consumo.c` | Acrescenta registros ao arquivo `consumo.txt`. |
| `exercicio03_ler_ficheiro_tabuada.c` | Lê e exibe o conteúdo de `tabuada.txt`. |
| `exercicio05_relatorio_leitura_consumo.c` | Lê registros de consumo e calcula indicadores. |
| `exercicio07_relatorio_leitura_vendas.c` | Calcula quantidade, soma e maior valor de vendas. |
| `consumo.txt` e `tabuada.txt` | Arquivos de dados utilizados nos exercícios. |

## Conceitos praticados
- Tipo `FILE` e ponteiro para arquivo.
- Abertura com `fopen` nos modos `r`, `w` e `a`.
- Escrita com `fprintf`.
- Leitura com `fscanf` e `fgets`.
- Verificação de erro na abertura e fechamento com `fclose`.
- Contadores e acumuladores para relatórios.

## Compilação e execução
Exemplo a partir da raiz do repositório:

```bash
gcc "AULA 09/exemplo01_criar_ficheiro_tabuada.c" -o gerar_tabuada
```

Entre na pasta da aula antes de executar para que os arquivos de texto sejam criados ou encontrados no local esperado:

Windows:
```cmd
cd "AULA 09"
..\gerar_tabuada.exe
```

Linux/macOS:
```bash
cd "AULA 09"
../gerar_tabuada
```

Compile cada arquivo `.c` separadamente.

## Cuidados importantes
Inicialize acumuladores antes dos cálculos e confira se a quantidade de registros é maior que zero antes de calcular médias. Sempre verifique se `fopen` retornou um ponteiro válido e feche o arquivo ao terminar.

## Finalidade acadêmica
Compreender como armazenar dados de forma persistente e recuperá-los para processamento posterior.
