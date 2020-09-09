#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float salario;
	
	printf("Insira valor do salário: ");
	scanf("%f", &salario);
	
	printf("O reajuste de 25%% do salário de R$ %.2f resulta em R$ %.2f.", salario, salario * 1.25);
	
	getch();
}
