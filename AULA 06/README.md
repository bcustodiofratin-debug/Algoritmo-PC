# Aula 06 — Estruturas de repetição

## Objetivo
Praticar estruturas de repetição na linguagem C, utilizando laços `for`, `while` e `do-while` para executar tarefas repetitivas, acumular valores e validar entradas.

## Arquivos

| Arquivo | Descrição |
|---|---|
| `exemplo_01_gerador_de_tabuadas.c` | Gera a tabuada de números informados pelo usuário. |
| `exemplo_02_contador_do_while.c` | Demonstra a contagem de 1 até 5 com `do-while`. |
| `exercicio_01_somador_de_compras.c` | Lê cinco preços e calcula o total de compras. |
| `exercicio_02_analise_notas_turma.c` | Lê cinco notas e calcula a média e a maior nota. |
| `exercicio_03_soma_numeros_impares.c` | Soma números ímpares até que o usuário digite zero. |
| `exercicio_04_media_com_validacao.c` | Solicita notas e calcula a média com validação de faixa. |
| `exercicio_05_sistema_login_tentativas.c` | Simula autenticação com limite de tentativas. |

## Conceitos praticados
- Laço `for` para repetições com quantidade definida.
- Laços `while` e `do-while` para repetições condicionais.
- Contadores e acumuladores.
- Operador módulo (`%`) para identificar números ímpares.
- Estruturas condicionais dentro de laços.
- Validação de dados informados pelo usuário.

## Compilação e execução
Exemplo a partir da raiz do repositório:

```bash
gcc "AULA 06/exemplo_01_gerador_de_tabuadas.c" -o tabuada
```

Windows: `tabuada.exe`  
Linux/macOS: `./tabuada`

Altere o caminho do arquivo e o nome do executável para compilar outro exercício. Compile um arquivo por vez.

## Pontos de atenção na revisão
Ao aprimorar os exercícios, inicialize todas as variáveis acumuladoras antes do uso, valide o intervalo de notas de forma consistente e confira as condições de parada dos laços. Essas verificações evitam resultados imprevisíveis e repetições incorretas.

## Finalidade acadêmica
Compreender como controlar o fluxo de execução de um programa e automatizar tarefas por meio de estruturas de repetição.
