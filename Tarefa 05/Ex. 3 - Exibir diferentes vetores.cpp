#include <stdio.h>

int main()
{
    int qnt, opcao, continuar, contador;

    printf("Informe a quantidade de números do vetor: ");
    scanf("%i", &qnt);

    int numeros[qnt], numeros_calc[qnt];

    for (int i = 0; i < qnt; ++i)
    {
        printf("Digite o %io número: ", i+1);
        scanf("%i", &numeros[i]);
    }

    do
    {
        printf("\n---------Modos de exibição---------\n");
        printf("1 - Vetor em ordem inversa\n");
        printf("2 - Somente números pares\n");
        printf("3 - Somente números ímpares\n");
        printf("4 - Média aritmética\n");
        printf("5 - Maior valor e posição no vetor\n");
        printf("6 - Menor valor e posição no vetor\n");
        printf("7 - Elementos repetidos\n");
        printf("8 - Elementos não repetidos\n");
        printf("9 - Frequência de cada elemento\n");
        printf("-----------------------------------\n\n");

        printf("Escolha uma das opções: ");
        scanf("%i", &opcao);

        switch (opcao)
        {
            case 1:
                printf("\nVetor em ordem inversa\n\n");
                for (int i = 0; i < qnt; ++i)
                {
                    numeros_calc[i] = numeros[qnt-i-1];
                }

                for (int i = 0; i < qnt; ++i)
                {
                    printf("%i\t", numeros_calc[i]);
                }

                printf("\n");
                break;

            case 2:
                printf("\nNúmeros pares\n\n");

                contador = 0;

                for (int i = 0; i < qnt; ++i)
                {
                    if(numeros[i] % 2 == 0)
                        ++contador;
                }

                if (contador == 0)
                    printf("Não há números pares.");
                else
                {
                    for (int i = 0; i < qnt; ++i)
                    {
                        if (numeros[i] % 2 == 0)
                            printf("%i\t", numeros[i]);
                    }
                }

                printf("\n");
                break;

            case 3:
                printf("\nNúmeros ímpares\n\n");

                contador = 0;

                for (int i = 0; i < qnt; ++i)
                {
                    if(numeros[i] % 2 == 1)
                        ++contador;
                }

                if (contador == 0)
                    printf("Não há números ímpares.");
                else
                {
                    for (int i = 0; i < qnt; ++i)
                    {
                        if (numeros[i] % 2 == 1)
                            printf("%i\t", numeros[i]);
                    }
                }

                printf("\n");
                break;

            case 4:
                printf("\nMédia aritmética\n\n");

                if (qnt == 0)
                    printf("Não é possível realizar o cálculo");
                else
                {
                    float media_arit, soma_n = 0;

                    for (int i = 0; i < qnt; ++i)
                    {
                        soma_n += numeros[i];
                    }
                    media_arit = soma_n / qnt;
                    printf("O valor da média aritmética do vetor é de %.2f.", media_arit);
                }

                printf("\n");
                break;

            case 5:
                printf("\nMaior valor do vetor\n\n");

                if (qnt > 0)
                {
                    int maior = numeros[0];

                    for (int i = 0; i < qnt; ++i) // Busca o maior valor do vetor.
                    {
                        if (maior < numeros[i])
                            maior = numeros[i];
                    }

                    printf("O maior valor é %i.\n", maior);
                    printf("O valor é encontrado na(s) posição(ões): ");

                    for (int i = 0; i < qnt; ++i) // Imprimi as posições do maior valor.
                    {
                        if (maior == numeros[i])
                            printf("%i\t", i);
                    }
                }
                else
                    printf("Não é possível encontrar o maior valor.");

                printf("\n");
                break;

            case 6:
                printf("\nMenor valor do vetor\n\n");

                if (qnt > 0)
                {
                    int menor = numeros[0];

                    for (int i = 0; i < qnt; ++i) // Busca o menor valor do vetor.
                    {
                        if (menor > numeros[i])
                            menor = numeros[i];
                    }

                    printf("O menor valor é %i.\n", menor);
                    printf("O valor é encontrado na(s) posição(ões): ");

                    for (int i = 0; i < qnt; ++i) // Imprimi as posições do menor valor.
                    {
                        if (menor == numeros[i])
                            printf("%i\t", i);
                    }
                }
                else
                    printf("Não é possível encontrar o menor valor.");

                printf("\n");
                break;

            case 7:
                printf("\nElementos repetidos\n\n");

                if (qnt > 0)
                {
                    for (int i = 0; i < qnt; ++i)
                    {
                        contador = 0;
                        for (int ii = i; ii < qnt; ++ii)
                        {
                            if(numeros[i] == numeros[ii])
                                ++contador;
                        }
                        if (contador > 1)
                            printf("%i\t", numeros[i]);
                    }
                }

                printf("\n");
                break;

            case 8:
                printf("\nElementos não repetidos\n\n");

                if (qnt > 0)
                {
                    for (int i = 0; i < qnt; ++i)
                    {
                        contador = 0;
                        for (int ii = 0; ii < qnt; ++ii)
                        {
                            if(numeros[i] == numeros[ii])
                                ++contador;
                        }
                        if (contador == 1)
                            printf("%i\t", numeros[i]);
                    }
                }

                printf("\n");
                break;

            case 9:
                printf("\nFrequência dos elementos\n\n");

                if (qnt > 0)
                {
                    printf("N\tfreq.\n");
                    for (int i = 0; i < qnt; ++i)
                    {
                        contador = 0;
                        for (int ii = 0; ii <= i; ++ii)
                        {
                            if(numeros[i] == numeros[ii])
                                ++contador;
                        }

                        if (contador == 1)
                        {
                            printf("%i\t", numeros[i]); // Imprimi elemento.

                            int freq = 0;

                            for (int ii = 0; ii < qnt; ++ii) // Conta a frequência do elemento.
                            {
                                if(numeros[i] == numeros[ii])
                                    ++freq;
                            }

                            printf("%i\n", freq);
                        }
                    }
                }

                break;

            default:
                printf("Opção inválida.\n");
                break;
        }

        printf("\nDeseja consultar algo mais? (Sim = 1 / Não = 0) ");
        scanf("%i", &continuar);

    } while (continuar == 1);

    printf("\nOperação finalizada.\n");

    return 0;
}
