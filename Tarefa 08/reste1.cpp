#include <stdio.h>

int main (void)
{

    int v[10] = {1156, 6542, 4563, 4545, 5546, 5466, 567, 4568, 946, 1560};
    int *pont;

    pont = &v[0];

    printf("%d - %d\n", v, v+1);

    return 0;
}

