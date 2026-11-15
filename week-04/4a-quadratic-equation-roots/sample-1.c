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