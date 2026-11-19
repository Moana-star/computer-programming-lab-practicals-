#include <stdio.h>

int main(void)
{
    int a[3][3], b[3][3], c[3][3];
    int i, j;

    printf("ENTER A MATRIX\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            if (scanf("%d", &a[i][j]) != 1) return 1;

    printf("ENTER B MATRIX\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            if (scanf("%d", &b[i][j]) != 1) return 1;

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            c[i][j] = a[i][j] + b[i][j];

    printf("After addition of two matrices:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%d\t", c[i][j]);
        printf("\n");
    }

    return 0;
}
