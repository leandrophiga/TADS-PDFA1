#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	
	printf("Digite um número: ");
	scanf("%i", &x);
	
	if ( x % 2 == 0 ) // condição que deve ser verificada.
	{
		printf("É par"); // resultado se a condição for verdadeira.
	}
	else
	{
		printf("É impar"); // resultado se a condição for falsa.
	}
}
