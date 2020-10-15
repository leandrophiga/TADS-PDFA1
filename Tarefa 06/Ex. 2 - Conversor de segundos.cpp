#include <stdio.h>

int main (void)
{
    int h_seg (int horas);
    int min_seg (int minutos);

    int hora, minuto, segundo, t_seg
    ;

    printf("Digite a hora: ");
    scanf("%i", &hora);

    printf("Digite o minuto: ");
    scanf("%i", &minuto);

    printf("Digite o segundo: ");
    scanf("%i", &segundo);

    t_seg = h_seg (hora) + min_seg (minuto) + segundo;

    printf("\nO total de segundos de %ih %imin %iseg é %i segundos.\n", hora, minuto, segundo, t_seg);

    return 0;
}

int h_seg (int horas)
{
    int seg;

    seg = horas * 360;

    return seg;
}

int min_seg (int minutos)
{
    int seg;

    seg = minutos * 60;

    return seg;
}
