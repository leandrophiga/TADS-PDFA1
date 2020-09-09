#include <stdio.h>

int main ()
{
    int n, i = 1;

    printf("Digite o número da tabuada que você quer consultar: ");
    scanf("%i", &n);

    do
    {
        printf("%i x %i = %i\n", n, i, n * i);
        ++i;
    } while (i <= 10);

    return 0;

}
