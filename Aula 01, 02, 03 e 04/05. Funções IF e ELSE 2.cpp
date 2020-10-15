#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int a, b, c;
	
	printf("Digite o valor do lado 'A' do triângulo: ");
	scanf("%i", &a);
	
	printf("Digite o valor do lado 'B' do triângulo: ");
	scanf("%i", &b);
	
	printf("Digite o valor do lado 'C' do triângulo: ");
	scanf("%i", &c);
	
	if (a == b and b == c) // condição para ser verificada.
	{
	printf("Equilátero"); // resultado se for verdadeiro.
	}
	else // caso seja falso.
	{
	if (a == b or b == c or a == c) // segunda condição a ser verificada.
	{
	printf("Isósceles"); // resultado se for verdadeiro.
	}
	else // caso também seja falso.
	{
	printf("Escaleno"); // resultado que deve ser mostrado.
	}
	}
}
	
