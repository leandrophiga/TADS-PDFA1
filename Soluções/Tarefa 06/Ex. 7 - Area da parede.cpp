#include <stdio.h>

int main (void)
{
    float calc_area_parede (float altura, float largura);

    float alt, lar, area;

    printf("Digite a altura da parede: ");
    scanf("%f", &alt);

    printf("Digite a largura da parede: ");
    scanf("%f", &lar);

    area = calc_area_parede (alt, lar);

    printf("\nA área da parede de %.2f de altura e %.2f de largura é de %.2f.\n", alt, lar, area);

    return 0;
}

float calc_area_parede (float altura, float largura)
{
    float area;

    area = altura * largura;

    return area;
}
