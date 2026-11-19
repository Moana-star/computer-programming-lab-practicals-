#include <stdio.h>

#define MAX 10

void read(int x[MAX][MAX], int rows, int cols)
{
    int i, j;
    printf("Enter Matrix Value Row by Row\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            if (scanf("%d", &x[i][j]) != 1) {
                printf("Invalid input.\n");
                return;
            }
}

void display(int x[MAX][MAX], int rows, int cols)
{
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++)
            printf("%5d", x[i][j]);
        printf("\n");
    }
    printf("\n");
}

void mul(int x[MAX][MAX], int y[MAX][MAX], int z[MAX][MAX],
         int m, int n, int q)
{
    int i, j, k;
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            z[i][j] = 0;
            for (k = 0; k < n; k++)
                z[i][j] += x[i][k] * y[k][j];
        }
    }
}

int main(void)
{
    int a[MAX][MAX], b[MAX][MAX], c[MAX][MAX];
    int m, n, p, q;

    printf("Enter the size of A Matrix (Row and Col):\n");
    if (scanf("%d%d", &m, &n) != 2) return 1;
    printf("Enter the size of B Matrix (Row and Col):\n");
    if (scanf("%d%d", &p, &q) != 2) return 1;

    if (m < 1 || m > MAX || n < 1 || n > MAX ||
        p < 1 || p > MAX || q < 1 || q > MAX) {
        printf("Matrix dimensions must be between 1 and %d.\n", MAX);
        return 1;
    }

    if (n != p) {
        printf("Multiplication Not Possible\n");
        return 1;
    }

    read(a, m, n);
    read(b, p, q);
    mul(a, b, c, m, n, q);

    printf("A Matrix is:\n");
    display(a, m, n);
    printf("B Matrix is:\n");
    display(b, p, q);
    printf("C Matrix is:\n");
    display(c, m, q);

    return 0;
}
