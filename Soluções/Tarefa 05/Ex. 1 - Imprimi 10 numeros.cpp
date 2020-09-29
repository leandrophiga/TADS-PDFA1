#include <stdio.h>

int main()
{
    int numeros[10];

    for (int i = 0; i < 10; ++i)
    {
        printf("Digite o %io número: ", i+1);
        scanf("%i", &numeros[i]);
    }

    for (int i = 0; i < 10; ++i)
    {
        printf("%i\n", numeros[i]);
    }

    return 0;
}
