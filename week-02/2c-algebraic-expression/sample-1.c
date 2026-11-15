/*
 * PRACTICAL 2(c): Write a C program to evaluate algebraic expression (ax+b)/(ax-b).
 * AIM: To evaluate the expression (ax+b)/(ax-b).
 * ALGORITHM: Start; input a,b,x; calculate s=(a*x+b)/(a*x-b); display result s; Stop.
 * FLOWCHART: Start -> Read a,b,x -> Calculate s=(a*x+b)/(a*x-b) -> Display s -> Stop.
 * SAMPLE INPUT: Enter the values of a,b,x: 1 3 2
 * EXPECTED OUTPUT: The value of s=5
 * RECORD: Record at least 3 results.
 */

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