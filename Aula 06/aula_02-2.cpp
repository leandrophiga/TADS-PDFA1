#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int numero;

    printf("Digite um número: ");
    scanf("%i", &numero);

    if (numero % 3 == 0 && numero % 5 == 0) // Executará os comandos abaixo se forem cumpridas tais condições.
    {
        printf("O número %i é múltiplo de 3 e de 5.", numero);
    }
    else // Executará os comandos abaixo se não forem cumpridas as confições de IF.
    {
        printf("O nmero %i não é múltiplo de 3 e de 5 ao mesmo tempo.", numero);
    }

    return 0;
}
