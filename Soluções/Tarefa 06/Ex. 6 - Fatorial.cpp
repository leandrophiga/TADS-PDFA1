#include <stdio.h>

int main (void)
{
    int fatorial (int n);

    int n, n_fatorial;

    printf("Digite um valor: ");
    scanf("%i", &n);

    n_fatorial = fatorial (n);

    if (n_fatorial > 0)
        printf("\nO fatorial de %i é %i.\n", n, n_fatorial);
    else
        printf("\nNão foi possível calcular o fatorial.\n");

    return 0;
}

int fatorial (int n)
{
    int fat = 1;

    if (n < 0)
        fat = -1;
    if (n > 0)
    {
        for (int i = n; i > 0; i--)
        {
            fat *= i;
        }
    }

    return fat;
}
