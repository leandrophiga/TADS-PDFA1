#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	char bloco; // insere uma variável do tipo charactere.
	char nome[50]; // insere uma variável com capacidade de 50 caracteres.
	float nota;
	
	printf("Digite o nome: "); // a combinação dos três insere um valor para uma variável char com mais de um caractere.
    fflush(stdin);
	gets(nome);
	
	printf("Digite a nota: ");
	scanf("%f", &nota);
	
	printf("Digite a idade: ");
	scanf("%i", &idade);
	
	printf("O nome é %s, a idade é %i e a nota foi %.2f", nome, idade, nota); // %s retorna string
	
	getch(); // pausa o programa.
}
	
