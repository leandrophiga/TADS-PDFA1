#include <stdlib.h> // inclue bibliotecas.
#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese"); // permite inserir acentos e "c" cedilha.
	
	printf("LEANDRO PAIVA HIGA\n\nENDEREÇO: RUA DOUTOR BERNARDINO RIBEIRO, 15\n\nBAIRRO: VILA GRANADA\n\nCEP: 03658-080"); // imprime o que tiver dentro do parênteses e o \n joga para linha debaixo.
}
