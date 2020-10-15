#include <stdio.h>

int main ()
{
    void get_string (char linha[]);

    char nome[100];

    printf("Digite seu nome: ");
    get_string(nome);

    printf("%s\n", nome);

    return 0;
}

void get_string (char linha[])
{
    char c; // caractere que irá compor a string
    int i = 0; // índice do caractere

    do {
        c = getchar (); // inseri o caractere digitado no  'c'
        linha [i] = c; // inseri o caractere digitado na posição
        ++i; // próxima posição da string
    } while ( c != '\n'); // enquanto não for ENTER ele continua com a string

    linha [i - 1] = '\0'; // limpa o ENTER
}
