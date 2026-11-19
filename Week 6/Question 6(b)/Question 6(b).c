#include <stdio.h>

int gcdnonrecursive(int m, int n)
{
    int remainder;

    if (m < 0) m = -m;
    if (n < 0) n = -n;

    while (n != 0) {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    return m;
}

int main(void)
{
    int a, b;

    printf("Enter the two numbers whose GCD is to be found: ");
    if (scanf("%d%d", &a, &b) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("GCD of %d and %d is %d\n", a, b, gcdnonrecursive(a, b));
    return 0;
}
