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

    while (r != 0) // r = 0 dir� se a senha digitada est� correta.
    {
        printf("Digite a senha: ");
        i = 0;
        caractere = getch(); // a tecla digitada n�o aparecer� e ser� alocada em 'caractere'.
        SenhaDigitada[i] = caractere; // o caractere digitado estar� na posi��o 0 de 'SenhaDigitada'.
        ++i; // 'i' passa a ser de 0 para 1

        while (i < 99 && caractere != 13)
        /*
        Enquanto n�o acabar os espa�os da string 'SenhaDigitada'
        e o caractere n�o for ENTER poder� continuar digitando a senha
        */
        {
            printf("*"); // o �ltimo 'caractere' digitado aparecer� como '*'.
            caractere = getch(); // captura a pr�xima tecla e aloca em 'caractere'.
            SenhaDigitada[i] = caractere; // o caractere digitado vai para a posi��o 'i' de 'SenhaDigitada'.
            ++i; // 'i' passa para a pr�xima posi��o.
        }

        SenhaDigitada[i - 1] = '\0'; // coloca valor vazio para o resto das posi��es de 'SenhaDigitada'.
        printf("\n\n");
        r = strcmp(SenhaDigitada, senha); // se a 'SenhaDigitada' for igual a 'senha', r = 0.
        if (r != 0) // caso for diferente, aparecer�...
        {
            printf("Senha inv�lida.");
            getch();
            printf("\n\n");
        } // como a senha foi inv�lida voltar� para a digita��o da senha ap�s inserir qualquer tecla.
    }

    printf("==========SISTEMA==========\n"); // apresenta��o das op��es do sistema
    printf("a = saldo\n");
    printf("b = dep�sito\n");
    printf("c = pagamentos\n");
    printf("d = transfer�ncias\n");
    printf("e = sair\n");
    printf("===========================\n");

    printf("\nEscolha a op��o: "); // usu�rio escolhe a op��o.
    scanf("%c", &opcao);

    switch (opcao) // encaminhar� para a op��o escolhida.
    {
        case 'a':
            printf("\nopera��o: saldo\n");
            break;
        case 'b':
            printf("\nopera��o: dep�sito\n");
            break;
        case 'c':
            printf("\nopera��o: pagamentos\n");
            break;
        case 'd':
            printf("\nopera��o: transfer�ncias\n");
            break;
        case 'e':
            printf("\nencerrando opera��o.\n");
            break;
        default:
            printf("\nop��o inv�lida.\n");
            break;
    }

    return 0;
}
