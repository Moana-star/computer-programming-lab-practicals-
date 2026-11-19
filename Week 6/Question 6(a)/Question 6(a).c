#include <stdio.h>

int gcdrecursive(int m, int n)
{
    if (m < 0) m = -m;
    if (n < 0) n = -n;

    if (n > m)
        return gcdrecursive(n, m);

    if (n == 0)
        return m;

    return gcdrecursive(n, m % n);
}

int main(void)
{
    int a, b;

    printf("Enter the two numbers whose GCD is to be found: ");
    if (scanf("%d%d", &a, &b) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("GCD of %d and %d is %d\n", a, b, gcdrecursive(a, b));
    return 0;
}
