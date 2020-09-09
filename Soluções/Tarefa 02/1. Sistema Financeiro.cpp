/*
Nome: Leandro Paiva Higa
RA: SP3052648
*/

#include <stdio.h>
#include <conio.h>
#include <string.h> // utilizar strcmp()
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    char SenhaDigitada[100], caractere, senha[] = "1310", opcao;
    int i, r = 1;

    while (r != 0) // r = 0 dirá se a senha digitada está correta.
    {
        printf("Digite a senha: ");
        i = 0;
        caractere = getch(); // a tecla digitada não aparecerá e será alocada em 'caractere'.
        SenhaDigitada[i] = caractere; // o caractere digitado estará na posição 0 de 'SenhaDigitada'.
        ++i; // 'i' passa a ser de 0 para 1

        while (i < 99 && caractere != 13)
        /*
        Enquanto não acabar os espaços da string 'SenhaDigitada'
        e o caractere não for ENTER poderá continuar digitando a senha
        */
        {
            printf("*"); // o último 'caractere' digitado aparecerá como '*'.
            caractere = getch(); // captura a próxima tecla e aloca em 'caractere'.
            SenhaDigitada[i] = caractere; // o caractere digitado vai para a posição 'i' de 'SenhaDigitada'.
            ++i; // 'i' passa para a próxima posição.
        }

        SenhaDigitada[i - 1] = '\0'; // coloca valor vazio para o resto das posições de 'SenhaDigitada'.
        printf("\n\n");
        r = strcmp(SenhaDigitada, senha); // se a 'SenhaDigitada' for igual a 'senha', r = 0.
        if (r != 0) // caso for diferente, aparecerá...
        {
            printf("Senha inválida.");
            getch();
            printf("\n\n");
        } // como a senha foi inválida voltará para a digitação da senha após inserir qualquer tecla.
    }

    printf("==========SISTEMA==========\n"); // apresentação das opções do sistema
    printf("a = saldo\n");
    printf("b = depósito\n");
    printf("c = pagamentos\n");
    printf("d = transferências\n");
    printf("e = sair\n");
    printf("===========================\n");

    printf("\nEscolha a opção: "); // usuário escolhe a opção.
    scanf("%c", &opcao);

    switch (opcao) // encaminhará para a opção escolhida.
    {
        case 'a':
            printf("\noperação: saldo\n");
            break;
        case 'b':
            printf("\noperação: depósito\n");
            break;
        case 'c':
            printf("\noperação: pagamentos\n");
            break;
        case 'd':
            printf("\noperação: transferências\n");
            break;
        case 'e':
            printf("\nencerrando operação.\n");
            break;
        default:
            printf("\nopção inválida.\n");
            break;
    }

    return 0;
}
