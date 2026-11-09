#include <stdio.h>
#include <locale.h>

// Agrupa os dados de identificação e as notas de um aluno.
typedef struct {
    int rgm;
    float nota1;
    float nota2;
    float media;
} Aluno;

// Calcula a média e armazena o resultado na estrutura recebida.
void calcular_media(Aluno *aluno)
{
    aluno->media = (aluno->nota1 + aluno->nota2) / 2.0f;
}

int main(void)
{
    setlocale(LC_CTYPE, "");

    Aluno aluno1;

    printf("RGM: ");
    if (scanf("%d", &aluno1.rgm) != 1) {
        printf("RGM inválido.\n");
        return 1;
    }

    printf("Nota 1: ");
    if (scanf("%f", &aluno1.nota1) != 1) {
        printf("Nota inválida.\n");
        return 1;
    }

    printf("Nota 2: ");
    if (scanf("%f", &aluno1.nota2) != 1) {
        printf("Nota inválida.\n");
        return 1;
    }

    calcular_media(&aluno1);

    printf("\nRGM: %d\n", aluno1.rgm);
    printf("Média: %.2f\n", aluno1.media);

    return 0;
}
