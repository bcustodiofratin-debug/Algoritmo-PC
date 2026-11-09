#include <stdio.h>
#include <locale.h>

// Troca os valores armazenados nos endereços recebidos.
void trocar(int *a, int *b)
{
    int auxiliar = *a;
    *a = *b;
    *b = auxiliar;
}

int main(void)
{
    setlocale(LC_CTYPE, "");

    // Variáveis inteiras que serão modificadas pela função trocar.
    int a, b;

    printf("Digite o valor de a: ");
    if (scanf("%d", &a) != 1) {
        printf("Valor inválido.\n");
        return 1;
    }

    printf("Digite o valor de b: ");
    if (scanf("%d", &b) != 1) {
        printf("Valor inválido.\n");
        return 1;
    }

    printf("Antes: a=%d b=%d\n", a, b);

    // Envia os endereços das variáveis para a função.
    trocar(&a, &b);

    printf("Depois: a=%d b=%d\n", a, b);

    return 0;
}
