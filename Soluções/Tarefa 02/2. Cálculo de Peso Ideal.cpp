/*
Nome: Leandro Paiva Higa
RA: SP3052648
*/
#include <stdio.h>
#include <locale.h>

int main(void)
{
    void limparBuffer(void);
    setlocale(LC_ALL, "Portuguese");

    float altura, PesoIdeal;
    char genero = '\0';

    while (genero != 'M' && genero != 'F')
    {
        printf("Digite:\nM = masculino\tF = feminino\nDeclare seu gênero: ");
        scanf("%c", &genero);
        limparBuffer();
        if (genero != 'M' && genero != 'F')
            printf("\nopção inválida.\n");
    }

    printf("\n\nDigite sua altura (em metros): ");
    scanf("%f", &altura);

    if (genero == 'M')
    {
        PesoIdeal = 72.7 * altura - 58;
        printf("\nO peso ideal de uma pessoa do gênero %c e altura %.2f m é de %.2f kg\n\n", genero, altura, PesoIdeal);
    }
    else
    {
        PesoIdeal = 62.1 * altura - 44.7;
        printf("\nO peso ideal de uma pessoa do gênero %c e altura %.2f m é de %.2f kg\n\n", genero, altura, PesoIdeal);
    }

    return 0;
}

void limparBuffer(void) // função criada para limpar o buffer do teclado.
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF);
}
