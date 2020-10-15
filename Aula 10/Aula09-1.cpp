#include <stdio.h>

void teste()
{
    printf("oi.. estou no modulo teste.\n");
}

int main(void)
{
    printf("estou na linha 10\n");
    teste(); // chamada de módulo (chamada de função/procedimento)
    printf("estou na linha 12\n");

    return 0;
}
