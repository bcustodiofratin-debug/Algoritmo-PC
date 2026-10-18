#include<stdio.h>
#include<locale.h>

int main ()

{
    setlocale(LC_CTYPE, "");

    float largura;
    float comprimento;
    float perimetro;
    float area;

    printf ("Qual o comprimento do jardim (m)?  ");
    scanf("%f", &comprimento);
    printf("Qual a largura do jardim (m)? ");
    scanf("%f", &largura);

    perimetro = 2 * (comprimento+largura);
    area = comprimento*largura;

    printf("\nPerímetro do jardim: %.2f m\n\n", perimetro);
    printf("Área do jardim: %.2f m²\n", area);

    return 0;


}
