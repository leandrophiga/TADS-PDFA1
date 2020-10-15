#include <stdio.h>
#define N 4

typedef struct
{
    char name[20];
    int eng, math, phys;
    float media;
} student;

student data [N] =
{
    {"Evandro", 82, 72, 58},
    {"Thomas" , 77, 82, 79},
    {"Sabrina", 52, 62, 39},
    {"Melinda", 61, 82, 88},
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

    return 0;
}

void media_student (student data[])
{
    for (int i = 0; i < N; i++)
    {
        data[i].media = (data[i].eng + data[i].math + data[i].phys) / 3;
    }
}
