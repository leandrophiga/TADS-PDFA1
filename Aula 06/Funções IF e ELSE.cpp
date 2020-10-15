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

    if(A%2 == 0) // executará os comandos abaixo se cumprir tal condição.
    {
        printf("O numero é par.");
    }

    else // executará os comandos abaixo se não cumprir a condição de IF.
    {
        printf("O numero é ímpar.");
    }

}
