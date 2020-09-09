#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float temp_c, temp_f;
	
	printf("Insira a temperatura em Celsius: ");
	scanf("%f", &temp_c);
	
	temp_f = temp_c * 1.8 + 32;

	printf("%.2f °C equivale a %.2f F.", temp_c, temp_f);
	
	getch();
}
