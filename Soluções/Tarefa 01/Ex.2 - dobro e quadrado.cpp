#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float numero;
	
	printf("Insira um número: ");
	scanf("%f", &numero);

	printf("O dobro e o quadrado de %.2f é %.2f e %.2f respectivamente.", numero, 2 * numero, pow(numero, 2));
	
	getch();
}
