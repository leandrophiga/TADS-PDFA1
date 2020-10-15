#include <stdio.h>
#define N 4

typedef struct
{
    char name[20];
    int eng, math, phys;
    float media;
    char rua[50];
    int num;
    char cidade[20];
    int CEP;
} student;

student data [N] =
{
    {"Evandro", 82, 72, 58, {}, "R. Norte", 15, "São Paulo", 12345678},
    {"Thomas" , 77, 82, 79, {}, "R. Sul", 20, "Rio de Janeiro", 87654321},
    {"Sabrina", 52, 62, 39, {}, "R. Leste", 25, "Belo Horizonte", 13579012},
    {"Melinda", 61, 82, 88, {}, "R. Oeste", 35, "Brasília", 2468012}
};

int main (void)
{
    void media_student (student data[]);

    int i;

    media_student (data);

    for (i = 0; i < N; i++)
    {
        printf("%7s: Eng = %3i Math = %3i Phys = %3i Med = %.2f\n",
        data[i].name, data[i].eng, data[i].math, data[i].phys, data[i].media);
    }

    printf("\n\nINFORMAÇÕES DE ENDEREÇO\n\n");

    for (i = 0; i < N; i++)
    {
        printf("%s\n%s, %i - %s - CEP: %i\n\n",
        data[i].name, data[i].rua, data[i].num, data[i].cidade, data[i].CEP);
    }

    return 0;
}

void media_student (student data[])
{
    for (int i = 0; i < N; i++)
    {
        data[i].media = (data[i].eng + data[i].math + data[i].phys) / 3;
    }
}

