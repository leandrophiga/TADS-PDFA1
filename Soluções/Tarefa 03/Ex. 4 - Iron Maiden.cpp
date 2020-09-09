#include <stdio.h>
#include <string.h> // utilizar strcmp()
#include <termios.h>
#include <unistd.h>

int main(void)
{
    int getch(void);
    char SenhaDigitada[100], caractere, senha[] = "iron maiden";
    int i, r = 1, n_tentativa = 1;

    while (r != 0 && n_tentativa <= 3) // r = 0 dirá se a senha digitada está correta.
    {
        printf("Digite a senha: ");
        i = 0;
        caractere = getch(); // a tecla digitada não aparecerá e será alocada em 'caractere'.
        SenhaDigitada[i] = caractere; // o caractere digitado estará na posição 0 de 'SenhaDigitada'.
        ++i; // 'i' passa a ser de 0 para 1

        while (i < 99 && caractere != 10)
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
            ++n_tentativa;
            printf("\n\n");
        } // como a senha foi inválida voltará para a digitação da senha após inserir qualquer tecla.
    }

    if (r != 0)
    {
        printf("BARRADO NA ENTRADA\n");
    }
    else
    {
        printf("Acesso Vip!\n");
    }

    return 0;
}

int getch(void)
{
    struct termios oldattr, newattr;
    int ch;
    tcgetattr( STDIN_FILENO, &oldattr );
    newattr = oldattr;
    newattr.c_lflag &= ~( ICANON | ECHO );
    tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
    ch = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
    return ch;
}
