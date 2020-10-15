#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int numero; // insere uma variável do tipo número inteiro.
	
	printf("Digite um número inteiro: ");
	scanf("%i", &numero); // requisita uma entrada de valor para a variável pelo teclado.
	
	printf("O dobro de %i é %i", numero, numero*2); // não é necessário gerar uma outra variável para fazer um cálculo se quiser.
}
