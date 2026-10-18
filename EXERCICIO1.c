#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_CTYPE, "");

    float raio, perimetro;
    printf(" Qual a medida do raio (cm)? ");
    scanf("%f", &raio);
    perimetro = 2*3.14*raio;
    printf("O perímetro da circunferência é: %.2f", perimetro);
    return 0;


}
