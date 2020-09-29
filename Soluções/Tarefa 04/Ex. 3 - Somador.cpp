#include <stdio.h>

int main ()
{
    int n, soma = 0;

    printf("Digite um número: ");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++)
    {
        soma += i;
    }

    printf("A soma dos %i primeiros números inteiros positivos é %i.\n", n, soma);

    return 0;
}
