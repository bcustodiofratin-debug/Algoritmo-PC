#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_CTYPE, "");

    int qte_participantes, qte_jogadores_por_time, qte_computadores;
    int qte_times, computadores_faltantes;
    float potencia, duracao, preco_kwh;
    float preco_kit, outros_custos, orcamento;
    float consumo_energia, custo_energia;
    float custo_alimentacao, custo_total;
    float custo_por_participante, saldo;

    printf("Qual será a quantidade total de participantes? ");
    scanf("%d", &qte_participantes);

    printf("Qual será a quantidade de jogadores em cada time? ");
    scanf("%d", &qte_jogadores_por_time);

    printf("Qual a quantidade de computadores disponíveis? ");
    scanf("%d", &qte_computadores);

    printf("Qual é a potência média de cada computador (watts)? ");
    scanf("%f", &potencia);

    printf("Qual será a duração do evento (horas)? ");
    scanf("%f", &duracao);

    printf("Qual será o preço de 1 kWh de energia? ");
    scanf("%f", &preco_kwh);

    printf("Qual será o preço de um kit de alimentação por participante? ");
    scanf("%f", &preco_kit);

    printf("Quais foram outros custos do evento? ");
    scanf("%f", &outros_custos);

    printf("Qual é o orçamento máximo disponível para o evento? ");
    scanf("%f", &orcamento);

    // Valida os dados necessários para os cálculos.
    if (qte_participantes <= 0 || qte_jogadores_por_time <= 0 ||
        qte_computadores < 0 || potencia < 0 || duracao < 0 ||
        preco_kwh < 0 || preco_kit < 0 || outros_custos < 0 || orcamento < 0) {
        printf("\nErro: informe quantidades e valores válidos (não negativos).\n");
        return 1;
    }

    qte_times = (qte_participantes + qte_jogadores_por_time - 1) / qte_jogadores_por_time;
    consumo_energia = (qte_computadores * potencia * duracao) / 1000;
    custo_energia = consumo_energia * preco_kwh;
    custo_alimentacao = qte_participantes * preco_kit;
    custo_total = custo_energia + custo_alimentacao + outros_custos;
    custo_por_participante = custo_total / qte_participantes;
    saldo = orcamento - custo_total;

    printf("\n============== ARENA TECH ==============\n");
    printf("Participantes: %d\n", qte_participantes);
    printf("Times necessários: %d\n", qte_times);
    printf("Computadores disponíveis: %d\n", qte_computadores);

    if (qte_computadores >= qte_participantes) {
        printf("Infraestrutura: SUFICIENTE!\n");
    } else {
        computadores_faltantes = qte_participantes - qte_computadores;
        printf("Infraestrutura: INSUFICIENTE!\n");
        printf("Quantidade de computadores faltantes: %d\n", computadores_faltantes);
    }

    printf("Consumo estimado: %.2f kWh\n", consumo_energia);

    if (consumo_energia <= 20) {
        printf("Classificação do consumo: BAIXO\n");
    } else if (consumo_energia < 40) {
        printf("Classificação do consumo: MODERADO\n");
    } else {
        printf("Classificação do consumo: ALTO\n");
    }

    printf("Custo da energia: R$ %.2f\n", custo_energia);
    printf("Custo da alimentação: R$ %.2f\n", custo_alimentacao);
    printf("Outros custos: R$ %.2f\n", outros_custos);
    printf("CUSTO TOTAL: R$ %.2f\n", custo_total);
    printf("CUSTO POR PARTICIPANTE: R$ %.2f\n", custo_por_participante);
    printf("\nOrçamento disponível: R$ %.2f\n", orcamento);
    printf("Saldo: R$ %.2f\n", saldo);

    if (custo_total > orcamento) {
        printf("Situação do orçamento: ACIMA DO ORÇAMENTO\n");
    } else if (saldo <= orcamento * 0.05f) {
        printf("Situação do orçamento: NO LIMITE DO ORÇAMENTO\n");
    } else {
        printf("Situação do orçamento: DENTRO DO ORÇAMENTO\n");
    }

    if (qte_participantes > qte_computadores || custo_total > orcamento) {
        printf("DECISÃO FINAL: NÃO RECOMENDADO!\n");
    } else if (consumo_energia > 40) {
        printf("DECISÃO FINAL: APROVADO COM RESSALVAS!\n");
    } else {
        printf("DECISÃO FINAL: APROVADO!\n");
    }

    printf("=========================================\n");
    return 0;
}
