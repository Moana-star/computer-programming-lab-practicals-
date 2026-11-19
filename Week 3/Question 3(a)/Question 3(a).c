#include <stdio.h>

int main(void)
{
    int n, i = 1, sum = 0;

    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (n <= 1) {
        printf("%d is not a perfect number.\n", n);
        return 0;
    }

    while (i < n)
    {
        if (n % i == 0)
            sum = sum + i;
        i++;
    }

    if (sum == n)
        printf("%d is a perfect number.\n", n);
    else
        printf("%d is not a perfect number.\n", n);

    return 0;
}
