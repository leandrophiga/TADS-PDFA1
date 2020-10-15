#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float nota1, nota2, media; // insere variáveis do tipo ponto flutuante, ou seja, números decimais.
	
	// variáveis não devem começar com número, não devem ter caracteres especiais, pode-se usar underline "_".
	
	nota1 = 7.75; // insere um valor para a variável.
	nota2 = 6.30;
	
	media = (nota1 + nota2) / 2; // calcula um valor para a variável.
	
	printf("A média entre a nota1=%.2f e a nota2=%.2f é %.3f", nota1, nota2, media); // "%f" retorna o valor da variável float sequencial no parênteses, ".2" pede duas casas decimais.
}
