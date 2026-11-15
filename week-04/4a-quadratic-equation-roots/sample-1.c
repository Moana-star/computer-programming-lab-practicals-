/*
 * PRACTICAL 4(a): Write a C program to find the roots of a quadratic equation.
 * AIM: To find the roots of a quadratic equation.
 * DESCRIPTION: Roots are calculated using the quadratic formula.
 * ALGORITHM: Start; read a,b,c; calculate disc=b*b-4*a*c; if disc>0 calculate root1=(-b+sqrt(disc))/(2*a) and root2=(-b-sqrt(disc))/(2*a), then print both; else if disc==0 calculate equal roots -b/(2*a); otherwise print that roots are imaginary; Stop.
 * FLOWCHART: Start -> Read coefficients -> Calculate discriminant -> Branch for positive, zero or negative discriminant -> Display roots -> Stop.
 * SAMPLE INPUT: ENTER VALUES FOR a,b,c: 1 4 4
 * EXPECTED OUTPUT: THE ROOTS ARE EQUAL; Root1=-2, Root2=-2
 * RECORD: Record at least 3 results.
 */

#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b, c, d, realPart, imaginaryPart;

    printf("Enter the coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0)
    {
        printf("Root 1 = %.2f\n", (-b + sqrtf(d)) / (2 * a));
        printf("Root 2 = %.2f\n", (-b - sqrtf(d)) / (2 * a));
    }
    else if (d == 0)
    {
        printf("Both roots are equal = %.2f\n", -b / (2 * a));
    }
    else
    {
        realPart = -b / (2 * a);
        imaginaryPart = sqrtf(-d) / (2 * a);
        printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }

    return 0;
}