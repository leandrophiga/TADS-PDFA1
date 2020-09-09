#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float raio, altura, volume;
	
	printf("Insira o raio da lata: ");
	scanf("%f", &raio);
	
	printf("Insira a altura da lata: ");
	scanf("%f", &altura);
	
	volume = M_PI * pow(raio, 2) * altura; // "M_PI" traz o valor de pi e pow(n, x) = n^x
	
	printf("Volume da lata é %.2f.", volume);
	
	getch();
}
