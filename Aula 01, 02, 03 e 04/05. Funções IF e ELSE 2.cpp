#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int a, b, c;
	
	printf("Digite o valor do lado 'A' do tri�ngulo: ");
	scanf("%i", &a);
	
	printf("Digite o valor do lado 'B' do tri�ngulo: ");
	scanf("%i", &b);
	
	printf("Digite o valor do lado 'C' do tri�ngulo: ");
	scanf("%i", &c);
	
	if (a == b and b == c) // condi��o para ser verificada.
	{
	printf("Equil�tero"); // resultado se for verdadeiro.
	}
	else // caso seja falso.
	{
	if (a == b or b == c or a == c) // segunda condi��o a ser verificada.
	{
	printf("Is�sceles"); // resultado se for verdadeiro.
	}
	else // caso tamb�m seja falso.
	{
	printf("Escaleno"); // resultado que deve ser mostrado.
	}
	}
}
	
