#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int idade;

    printf("0 a 5 anos: bebe\n6 a 10 anos: infantil\n10 a 15 anos: infato-juvenil\n15 a 18 anos: adolescente\n\n");
    printf("Digite a idade: ");
    scanf("%i", &idade);

    switch(idade)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5: printf("bebe");
                break;

        case 6:
        case 7:
        case 8:
        case 9:
        case 10: printf("infantil");
                break;

        case 11:
        case 12:
        case 13:
        case 14:
        case 15: printf("infanto-juvenil");
                break;

        case 16:
        case 17:
        case 18: printf("adolescente");
                break;

        default: printf("opção inválida.");
    }
    return 0;

}

/*******
Exercicio
Utilizando switch..case faça uma estrutura de controle para um campeonado de natação para uma escola.
A classificação será baseada na idade da criança sendo que:
   de  0 a 5 anos: bebe
       6 a 10 anos: infantil
      10 a 15 anos: infato-juvenil
      15 a 18 anos: adolescente

      observações:
      				switch(variavel)
      				{
      					case 1: ....
      					        break;
      					case 2:
      					case 3:
      					case 4: ....
      							break;
 ****/

