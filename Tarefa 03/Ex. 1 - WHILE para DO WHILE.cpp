#include <stdio.h>
#include <stdlib.h>

int main ()
{

    int cont = 0;
    float base = 0, altura = 0, area = 0;

    do
    {
        printf ( "\n Base :" ); fflush(stdin); scanf("%f", &base);
        printf ( "\n Altura :" ); fflush(stdin); scanf("%f", &altura);
        if ( base==0 || altura==0 )
            printf ("\nImpossível calcular área do triângulo!");
        else
        {
            area = base*altura/2;
            printf ( "\n Área =%5.2f", area );
        }
        cont++;
        printf("\n");
    } while ( cont < 3 );
    printf ("\n");
    return 0;
}
