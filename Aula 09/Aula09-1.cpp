#include <stdio.h>

int main ()
{
    int n;
    float soma_notas = 0, media;

    printf("Digite o total de alunos na turma: ");
    scanf("%i", &n);

    float notas[n];

    for (int i = 0; i < n; i++)
    {
        printf("Digite a nota do aluno %i: ", i + 1);
        scanf("%f", &notas[i]);
    }

    for (int i = 0; i < n; i++)
    {
        soma_notas += notas[i];
    }

    media = soma_notas / n;

    printf("A média dos %i alunos é de %.2f.\n", n, media);

    return 0;
}
