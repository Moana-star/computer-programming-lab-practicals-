#include <stdio.h>

int main(void)
{
    int f0 = 0, f1 = 1, f, n, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Fibonacci sequence for the first %d terms:\n", n);

    i = 0;
    while (i < n)
    {
        printf("%d ", f0);
        f = f0 + f1;
        f0 = f1;
        f1 = f;
        i++;
    }

    return 0;
}