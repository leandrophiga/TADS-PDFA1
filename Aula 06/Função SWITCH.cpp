#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int opcao;

    printf("Menu de opções:\n1- cadastro\n2- lista\n3- sair\n\n");
    printf("Escolha a opção: ");
    scanf("%i", &opcao);

    switch(opcao)
    {
        case 1: printf("escolheu cadastro.");
                break;

        case 2: printf("escolheu lista.");
                break;

        case 3: printf("escolheu sair.");
                break;

        default: printf("opção inválida.");
    }
    return 0;

}
