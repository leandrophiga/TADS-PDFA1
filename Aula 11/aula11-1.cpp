#include <stdio.h>
#include "mylib.cpp";

int main (void)
{
    void get_string (char linha[]);
    void limpa_buffer(void);

    ficha aluno[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Digite o nome do aluno: ");
        get_string(aluno[i].nome);

        printf("Digite a idade do aluno: ");
        scanf("%i", &aluno[i].idade);
        limpa_buffer();

        printf("Digite a nota do aluno: ");
        scanf("%f", &aluno[i].nota1);
        limpa_buffer();
    }

    for (int i = 0; i < 3; i++)
    {
        printf("nome: %s\nidade: %i\nnota: %.2f\n\n", aluno[i].nome, aluno[i].idade, aluno[i].nota1);
    }
}

void get_string (char linha[])
{
    char caractere; // caractere que irá compor a string
    int i = 0; // índice do caractere

    do
    {
        caractere = getchar (); // inseri o caractere digitado no  'c'
        linha [i] = caractere; // inseri o caractere digitado na posição
        ++i; // próxima posição da string
    } while ( caractere != '\n'); // enquanto não for ENTER ele continua com a string

    linha [i-1] = '\0'; // limpa o ENTER
}

void limpa_buffer(void) // função criada para limpar o buffer do teclado.
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF);
}
