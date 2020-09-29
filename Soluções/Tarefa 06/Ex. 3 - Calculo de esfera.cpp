#include <stdio.h>
#include <math.h>

int main (void)
{
    float raio, volume;
    float calc_esfera (float r);

    printf("Digite o tamanho do raio da esfera: ");
    scanf("%f", &raio);

    volume = calc_esfera (raio);

    printf("\nO volume de uma esfera de raio %.2f é de %.2f.\n", raio, volume);

    return 0;
}

float calc_esfera (float r)
{
    float v;

    v = 4 * pow(r, 3) * M_PI / 3;

    return v;
}
