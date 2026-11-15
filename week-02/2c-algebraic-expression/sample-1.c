#include <stdio.h>
int main(void)
{
    double a, b, x, s, denominator;

    printf("Enter the values of a, b and x: ");
    if (scanf("%lf%lf%lf", &a, &b, &x) != 3)
        return 1;

    denominator = a * x - b;
    if (denominator == 0.0) {
        printf("The expression is undefined because the denominator is zero.\n");
        return 1;
    }

    s = (a * x + b) / denominator;
    printf("The value of s = %f\n", s);
    return 0;
}