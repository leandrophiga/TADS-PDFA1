#include <stdio.h>
#include <math.h>

int main ()
{
    float soma = 1, total = 0;
    int col = 1;
    for (int i = 1; i <= 16; i++)
    {
        printf("%.0f\t", soma * pow(2, i - 1));
        total += soma * pow (2, i - 1);
        if(i % 4 == 0)
            printf("\n");
    }
    printf("O total de de graos que deverá ser dado é de %.0f", total);
    return 0;
}
