#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float sal_bruto, IR, prev, sal_liquido;
	
	printf("Insira valor do salário bruto: ");
	scanf("%f", &sal_bruto);
	
	prev = sal_bruto * 0.085;
	
	IR = (sal_bruto - prev) * 0.275;
	
	sal_liquido = sal_bruto - prev - IR;
	
	printf("salário bruto ........................ R$ %.2f\n", sal_bruto);
	printf("previdência (8,5%%) ................... R$ %.2f\n", prev); // para imprimir o"%" basta duplicá-lo.
	printf("salário antes do IR .................. R$ %.2f\n", sal_bruto - prev);
	printf("IR (27,5%%) ........................... R$ %.2f\n", IR);
	printf("salário liquido ...................... R$ %.2f", sal_liquido);
	
	getch();
}
