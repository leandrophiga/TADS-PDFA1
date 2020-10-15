#include <stdio.h>

int main()
{
    int s = 0, n;

    printf("Digite um número para ser somado: ");
    scanf("%i", &n);

    while (n > 0)
    {
        s += n;
        n--;
    }
    printf("A soma é %i", s);

    return 0;
}
