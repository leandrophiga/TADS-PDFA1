#include <stdio.h>

int main ()
{
    int seq[50];

    printf("Digite o primeiro termo da sequência: ");
    scanf("%i", &seq[0]);

    printf("Digite o segundo termo da sequência: ");
    scanf("%i", &seq[1]);

    for (int i = 2; i < 50; i++)
    {
        if((i + 1) % 2 == 1)
            seq[i] = seq[i-1] + seq[i-2];
        else
            seq[i] = seq[i-1] - seq[i-2];
    }

    for (int i = 0; i < 50; i++)
    {
        printf("%i", seq[50 - i - 1]);
        if((i + 1) % 10 == 0)
            printf("\n");
        else
            printf("\t");
    }

    return 0;
}
