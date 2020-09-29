#include <stdio.h>

int main (void)
{
    bool verifica_sinal (float n);
    float numero;
    bool sinal;

    printf("Digite um número: ");
    scanf("%f", &numero);

    if (numero == 0)
        printf("\nO número é neutro.\n");
    else
        {
            sinal = verifica_sinal(numero);

            if (sinal == true)
                printf("\nO número é positivo.\n");
            else
                printf("\nO número é negativo.\n");
        }
    return 0;
}

bool verifica_sinal (float n)
{
    bool positivo;

    if (n > 0)
        positivo = true;
    else
        positivo = false;

    return positivo;
}
