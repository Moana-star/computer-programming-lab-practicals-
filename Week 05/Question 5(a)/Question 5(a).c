#include <stdio.h>

unsigned long long fact(int n)
{
    int i;
    unsigned long long f = 1;

    for (i = 1; i <= n; i++)
        f = f * i;

    return f;
}

int main(void)
{
    int n;
    unsigned long long f;

    printf("ENTER A VALUE FOR n:\n");
    if (scanf("%d", &n) != 1 || n < 0 || n > 20) {
        printf("Please enter an integer from 0 to 20.\n");
        return 1;
    }

    f = fact(n);
    printf("THE FACTORIAL OF A GIVEN NO IS..%llu\n", f);

    return 0;
}
