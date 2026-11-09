#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_CTYPE, "");

    int contador = 0;
    char dia[4];
    float consumo, media, soma = 0.0f, maior_consumo = 0.0f;
    FILE *arquivo = fopen("consumo.txt", "r");

    if (arquivo == NULL) {
        printf("ERRO AO ABRIR O ARQUIVO\n");
        return 1;
    }

    // Lê cada registro enquanto houver um dia e um valor de consumo válidos.
    while (fscanf(arquivo, "%3s %f", dia, &consumo) == 2) {
        soma += consumo;
        contador++;

        if (consumo > maior_consumo) {
            maior_consumo = consumo;
        }
    }

    fclose(arquivo);

    if (contador == 0) {
        printf("O arquivo não possui registros válidos.\n");
        return 1;
    }

    media = soma / contador;

    printf("Relatório de consumo\n");
    printf("Quantidade de registros: %d\n", contador);
    printf("Consumo médio: %.1f\n", media);
    printf("Maior consumo: %.1f\n", maior_consumo);

    return 0;
}
