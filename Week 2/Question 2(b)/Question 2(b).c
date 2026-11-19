#include <stdio.h>

long long power(int base, int exponent)
{
    long long result = 1;
    int i;

    for (i = 0; i < exponent; i++)
        result *= base;

    return result;
}

int main(void)
{
    int n, temp, rem, count = 0;
    long long sum = 0;

    printf("Enter a positive integer: ");

    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }

    temp = n;

    do
    {
        count++;
        temp /= 10;
    } while (temp != 0);

    temp = n;

    do
    {
        rem = temp % 10;
        sum += power(rem, count);
        temp /= 10;
    } while (temp != 0);

    if (sum == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    return 0;
}
