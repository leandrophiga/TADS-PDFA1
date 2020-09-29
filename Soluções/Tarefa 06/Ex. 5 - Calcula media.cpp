#include <stdio.h>

int main (void)
{
    float reg_valor (void);
    float calc_media (float soma, int qnt);

    float soma = 0, x, media;
    int contador = 0;

    do
    {
        x = reg_valor ();
        if (x >= 0)
        {
            soma+= x;
            ++ contador;
        }
    } while (x >= 0);

    if (contador == 0)
        printf("\nNão foi possível calcular a média artimética.\n");
    else
    {
        media = calc_media (soma, contador);

        printf("\nA média aritmética dos valores inseridos é %.2f.\n", media);
    }

    return 0;
}

float reg_valor (void)
{
    float valor;

    printf("Digite um valor (-1 para finalizar): ");
    scanf("%f", &valor);

    return valor;
}

float calc_media (float soma, int qnt)
{
    float media;

    media = soma / qnt;

    return media;
}
