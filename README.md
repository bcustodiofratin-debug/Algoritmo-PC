# 🚀 Portfólio de Lógica de Programação e Estruturas de Dados em C

[![Linguagem C](https://img.shields.io/badge/Linguagem-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Status](https://img.shields.io/badge/Status-Em%20Desenvolvimento-green.svg)](#)
[![Licença](https://img.shields.io/badge/Licen%C3%A7a-MIT-brightgreen.svg)](#licença)

Bem-vindo(a) ao meu repositório de estudos e práticas em **Lógica de Programação e Estruturas de Dados em C**. Este espaço reúne uma coleção progressiva de exercícios, algoritmos e projetos práticos desenvolvidos para consolidar fundamentos de desenvolvimento de software, raciocínio analítico e resolução de problemas.

Os conteúdos variam desde operações básicas de entrada e saída até a manipulação de matrizes multidimensionais e o desenvolvimento de programas orientados a regras de negócio reais.

---

## 🎯 Objetivos do Repositório

- **Consolidação de Lógica:** Construção de algoritmos estruturados a partir de problemas descritos em linguagem natural.
- **Domínio das Estruturas Fundamentais:** Aplicação prática de variáveis, tipos de dados, condicionais, laços de repetição, vetores e matrizes.
- **Tratamento de Dados e Internacionalização:** Leitura e exibição formatada de dados com suporte a caracteres locais via `locale.h`.
- **Projetos Aplicados:** Simulação de cenários do mundo real (como planejamento financeiro e logístico) traduzidos em software CLI (Interface de Linha de Comando).

---

## 🛠️ Tecnologias e Ferramentas

| Categoria | Tecnologia / Recurso |
| :--- | :--- |
| **Linguagem** | C (ANSI C / C99) |
| **Bibliotecas Padrão** | `<stdio.h>`, `<stdlib.h>`, `<math.h>`, `<locale.h>` |
| **Compilador Sugerido** | GCC (GNU Compiler Collection) |
| **Ambiente de Dev** | VS Code, CLion ou Code::Blocks |
| **Controle de Versão** | Git & GitHub |

---

## 📌 Conteúdo e Estrutura de Módulos

### 1. 📂 Manipulação de Estruturas Homogêneas (Vetores e Matrizes)

Exercícios focados em iteração, busca, ordenação simples e agregações estatísticas.

| Arquivo / Módulo | Conceito Principal | Descrição |
| :--- | :--- | :--- |
| `exercicio01.c` | Vetores / Arrays | Leitura de salários de funcionários e exibição sequencial formatada. |
| `exercicio02.c` | Vetores e Média | Cálculo de média aritmética e contagem de elementos acima da média. |
| `exercicio03.c` | Vetores e Busca | Processamento estatístico de salários: média, identificação do valor máximo e seu respectivo índice. |
| `exercicio04.c` | Matrizes ($3 \times 4$) | Controle de estoque de produtos em múltiplos dias, com consolidação por linha e total geral. |
| `exercicio05.c` | Matrizes ($3 \times 1$) | Cálculo de média individual de estudantes e determinação do maior desempenho da turma. |

---

### 2. ⚡ Fundamentos e Estruturas de Controle

Exercícios graduais organizados por tópicos de aprendizado:

- **Operadores e Cálculos Aritméticos:** Fórmulas matemáticas, conversões de unidades, cálculo de IMC, área/perímetro, consumo de energia e geometria plana.
- **Estruturas Condicionais (`if` / `else` / `switch`):** Validação de regras, cálculo de tarifas, equações do segundo grau (Bhaskara), aprovação escolar e múltiplas condições de decisão.
- **Estruturas de Repetição (`for` / `while` / `do-while`):** Acumuladores de valores, validação de entradas do usuário, controle de tentativas e geradores de tabuadas.

---

### 🌟 Projeto em Destaque: Arena Tech — Calculadora de Custos de Eventos de E-Sports

Um programa de linha de comando que simula uma análise completa de viabilidade financeira e logística para um campeonato de e-sports.

**Principais Funcionalidades:**
- **Estimativa Logística:** Cálculo da quantidade necessária de equipes e verificação da demanda de computadores por participante.
- **Consumo Energético:** Estimativa do consumo elétrico em kWh e seu custo financeiro total.
- **Consolidação Orçamentária:** Soma de despesas com energia, alimentação e custos operacionais adicionais.
- **Tomada de Decisão:** Cálculo do custo médio por participante, verificação de saldo orçamentário e emissão de recomendações finais automáticas.

> **Nota:** Este é um projeto acadêmico focado em modelagem de regras de negócio em C e não substitui um software de gestão financeira corporativa.

---

## 💻 Como Compilar e Executar

### Pré-requisitos
Certifique-se de ter um compilador C (como o `gcc`) instalado no seu sistema.

### Passo a Passo no Terminal

1. **Clonar o repositório:**
   ```bash
   git clone https://github.com/seu-usuario/seu-repositorio.git
   cd seu-repositorio
   ```

2. **Compilar um arquivo:**
   
   *Para exercícios padrão:*
   ```bash
   gcc exercicio01.c -o exercicio01
   ```

   *Para arquivos que utilizam a biblioteca matemática (`math.h`):*
   ```bash
   gcc exercicio_math.c -o programa -lm
   ```

3. **Executar o programa:**

   - **Linux / macOS:**
     ```bash
     ./exercicio01
     ```
   - **Windows (CMD / PowerShell):**
     ```cmd
     .\exercicio01.exe
     ```

---

## 📂 Organização das Pastas Sugerida

```text
.
├── 📄 README.md
├── 📁 01_introdutores/     # Conceitos básicos de I/O e variáveis
├── 📁 02_operadores/       # Exercícios de cálculos e fórmulas
├── 📁 03_condicionais/     # Aplicações com if, else e switch
├── 📁 04_repeticoes/       # Laços for, while e do-while
├── 📁 05_vetores_matrizes/ # Exercícios 01 a 05 com arrays
└── 📁 06_projetos/         # Projeto Arena Tech e outros projetos CLI
```

---

## 🚀 Boas Práticas e Evolução Técnica

Para elevar a qualidade do código para padrões de produção, as seguintes práticas estão em constante implementação:
- [x] **Tratamento de Entradas:** Validação de dados digitados pelo usuário.
- [x] **Modularização:** Separação de rotinas complexas em funções dedicadas.
- [x] **Compilação Rigorosa:** Verificação de alertas com as flags `-Wall -Wextra -Wpedantic`.
- [x] **Documentação:** Comentários explicativos e tabelas claras de dados.

---

## 👤 Autor

**Bruno Custodio Fratin**  
*Desenvolvimento de Software e Tecnologia da Informação*  

---

## 📝 Licença

Este repositório está sob a licença [MIT](./LICENSE) — sinta-se à vontade para utilizar, estudar e aprimorar os códigos fornecidos.
