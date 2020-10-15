#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int A;

    printf("Digite um valor: ");
    scanf("%i", &A);

    if(A%2 == 0)
    {
        printf("O numero é par.");
    }

    else
    {
        printf("O numero é ímpar.");
    }

}
