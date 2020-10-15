#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int ano_nasc, ano_atual, n_anos, n_meses, n_dias, n_semanas;
	
	printf("Insira o ano de nascimento: ");
	scanf("%i", &ano_nasc);
	
	printf("Insira o ano atual: ");
	scanf("%i", &ano_atual);
	
	n_anos = ano_atual - ano_nasc;
	n_meses = n_anos * 12;
	n_dias = n_anos * 365;
	n_semanas = n_anos * 52;
	
	printf("Ano de nascimento: %i / Ano atual: %i\n", ano_nasc, ano_atual);
	printf("Idade\n");
	printf("Em anos .................... %i\n", n_anos);
	printf("Em meses ................... %i\n", n_meses);
	printf("Em dias .................... %i\n", n_dias);
	printf("Em semanas ................. %i", n_semanas);
	
	getch();
}
