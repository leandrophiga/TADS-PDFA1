#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float nota1, nota2, media; // insere vari�veis do tipo ponto flutuante, ou seja, n�meros decimais.
	
	// vari�veis n�o devem come�ar com n�mero, n�o devem ter caracteres especiais, pode-se usar underline "_".
	
	nota1 = 7.75; // insere um valor para a vari�vel.
	nota2 = 6.30;
	
	media = (nota1 + nota2) / 2; // calcula um valor para a vari�vel.
	
	printf("A m�dia entre a nota1=%.2f e a nota2=%.2f � %.3f", nota1, nota2, media); // "%f" retorna o valor da vari�vel float sequencial no par�nteses, ".2" pede duas casas decimais.
}
