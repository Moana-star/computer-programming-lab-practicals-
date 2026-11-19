#include <stdio.h>

unsigned long long fact(int n)
{
    if (n == 0)
        return 1;
    else
        return (unsigned long long)n * fact(n - 1);
}

int main(void)
{
    int n;
    unsigned long long res;

    printf("ENTER A NUMBER:\n");
    if (scanf("%d", &n) != 1 || n < 0 || n > 20) {
        printf("Please enter an integer from 0 to 20.\n");
        return 1;
    }

    res = fact(n);
    printf("THE FACTORIAL OF A GIVEN NUMBER IS..%llu\n", res);

    return 0;
}
