#include <stdio.h>

int main(void)
{
    int a, b, x;
    double numerator, denominator, s;

    printf("Enter the values of a, b, x: ");

    if (scanf("%d %d %d", &a, &b, &x) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    numerator = (double)a * x + b;
    denominator = (double)a * x - b;

    if (denominator == 0.0) {
        printf("The expression is undefined because the denominator is zero.\n");
        return 1;
    }

    s = numerator / denominator;

    printf("The value of s = %g\n", s);

    return 0;
}
