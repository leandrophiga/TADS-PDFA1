#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int numero; // insere uma vari�vel do tipo n�mero inteiro.
	
	printf("Digite um n�mero inteiro: ");
	scanf("%i", &numero); // requisita uma entrada de valor para a vari�vel pelo teclado.
	
	printf("O dobro de %i � %i", numero, numero*2); // n�o � necess�rio gerar uma outra vari�vel para fazer um c�lculo se quiser.
}
