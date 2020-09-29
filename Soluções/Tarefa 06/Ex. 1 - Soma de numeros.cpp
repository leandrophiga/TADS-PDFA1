#include <stdio.h>

int main (void)
{
    int soma_n (int numero);

    int n, resultado;

    printf("Digite um número a ser somado: ");
    scanf("%i", &n);

    resultado = soma_n (n);

    printf("\nO resultado a soma dos %i primeiros números é de %i.\n", n, resultado);

    return 0;
}

int soma_n (int numero)
{
    int soma = 0;

    for (int i = 1; i <= numero; i++)
    {
        soma += i;
    }

    return soma;
}
