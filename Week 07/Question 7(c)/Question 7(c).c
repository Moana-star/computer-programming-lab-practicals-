#include <stdio.h>

int main(void)
{
    int a[10][10], i, j, m, symmetric = 1;

    printf("Enter order of square matrix: ");
    if (scanf("%d", &m) != 1 || m < 1 || m > 10) {
        printf("Enter a matrix order from 1 to 10.\n");
        return 1;
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            printf("Enter value of a[%d][%d]: ", i, j);
            if (scanf("%d", &a[i][j]) != 1) {
                printf("Invalid input.\n");
                return 1;
            }
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            if (a[i][j] != a[j][i])
                symmetric = 0;
        }
    }

    if (symmetric)
        printf("\nMatrix is symmetric\n");
    else
        printf("\nMatrix is not symmetric\n");

    return 0;
}
