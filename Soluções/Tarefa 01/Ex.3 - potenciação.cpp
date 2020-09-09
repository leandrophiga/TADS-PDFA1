#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float base, expoente;
	
	printf("Insira a base: ");
	scanf("%f", &base);
	
	printf("Insira o expoente: ");
	scanf("%f", &expoente);

	printf("%.2f elevado a %.2f resulta em %.2f.", base, expoente, pow(base, expoente));
	
	getch();
}
