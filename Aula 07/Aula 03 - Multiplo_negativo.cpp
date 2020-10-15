#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale (LC_ALL, "Portuguese");

    int n;

    printf("Digite um número: ");
    scanf("%i", &n);

    if (n < 0 && n % 3 == 0)
    {
        printf("O número %i é negativo e é múltiplo de 3.\n", n);
    }
    else if (n > 0 && n % 3 == 0)
    {
        printf("O número %i é positivo e é múltiplo de 3.\n", n);
    }
    else if (n < 0 && n % 3 != 0)
    {
        printf("O número %i é negativo e não é múltiplo de 3.\n", n);
    }
    else if (n > 0 && n % 3 != 0)
    {
        printf("O número %i é positivo e não é múltiplo de 3.\n", n);
    }
    else
    {
        printf("O número é nulo");
    }

    return 0;
}
