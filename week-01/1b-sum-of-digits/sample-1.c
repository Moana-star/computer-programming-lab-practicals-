#include <stdio.h>

int main(void)
{
    int n, r, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (n != 0)
    {
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }

    printf("The sum of individual digits is: %d\n", sum);
    return 0;
}