#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	
	printf("Digite um n�mero: ");
	scanf("%i", &x);
	
	if ( x % 2 == 0 ) // condi��o que deve ser verificada.
	{
		printf("� par"); // resultado se a condi��o for verdadeira.
	}
	else
	{
		printf("� impar"); // resultado se a condi��o for falsa.
	}
}
