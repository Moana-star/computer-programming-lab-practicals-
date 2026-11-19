#include <stdio.h>

int main(void)
{
    int n, i, fact, j;

    printf("Enter the number: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (n < 2) {
        printf("There are no prime numbers between 1 and %d.\n", n);
        return 0;
    }

    for (i = 2; i <= n; i++)
    {
        fact = 0;

        // THIS LOOP WILL CHECK A NO TO BE PRIME NO. OR NOT.
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
                fact++;
        }

        if (fact == 2)
            printf("%d\n", i);
    }

    return 0;
}
