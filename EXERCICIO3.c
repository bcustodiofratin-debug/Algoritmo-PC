#include<stdio.h>
#include<locale.h>

int main ()
{
    setlocale(LC_CTYPE, "");
     int semanas;
     float tempo;

    printf("Qual  a quantidade de semanas de gestação? ");
    scanf("%d", &semanas);
    tempo = (semanas*7)/30;
    printf("Tempo de gestação aproximado: %.2f", tempo);
     return 0;


}
