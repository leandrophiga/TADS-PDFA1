#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	char bloco; // insere uma vari�vel do tipo charactere.
	char nome[50]; // insere uma vari�vel com capacidade de 50 caracteres.
	float nota;
	
	printf("Digite o nome: "); // a combina��o dos tr�s insere um valor para uma vari�vel char com mais de um caractere.
    fflush(stdin);
	gets(nome);
	
	printf("Digite a nota: ");
	scanf("%f", &nota);
	
	printf("Digite a idade: ");
	scanf("%i", &idade);
	
	printf("O nome � %s, a idade � %i e a nota foi %.2f", nome, idade, nota); // %s retorna string
	
	getch(); // pausa o programa.
}
	
