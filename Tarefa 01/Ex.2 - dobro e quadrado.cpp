#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float numero;

	printf("Insira um n�mero: ");
	scanf("%f", &numero);

	printf("O dobro e o quadrado de %.2f � %.2f e %.2f respectivamente.", numero, 2 * numero, pow(numero, 2));

	return 0;
}
