#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale (LC_ALL, "Portuguese");

    int n;

    printf("Digite um n�mero: ");
    scanf("%i", &n);

    if (n < 0 && n % 3 == 0)
    {
        printf("O n�mero %i � negativo e � m�ltiplo de 3.\n", n);
    }
    else if (n > 0 && n % 3 == 0)
    {
        printf("O n�mero %i � positivo e � m�ltiplo de 3.\n", n);
    }
    else if (n < 0 && n % 3 != 0)
    {
        printf("O n�mero %i � negativo e n�o � m�ltiplo de 3.\n", n);
    }
    else if (n > 0 && n % 3 != 0)
    {
        printf("O n�mero %i � positivo e n�o � m�ltiplo de 3.\n", n);
    }
    else
    {
        printf("O n�mero � nulo");
    }

    return 0;
}
