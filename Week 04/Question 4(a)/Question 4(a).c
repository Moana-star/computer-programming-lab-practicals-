#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b, c;
    double disc, root1, root2, img, real;

    printf("ENTER VALUES FOR a,b,c:\n");
    if (scanf("%d%d%d", &a, &b, &c) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    if (a == 0) {
        printf("This is not a quadratic equation because a is zero.\n");
        return 1;
    }

    disc = (double)b * b - 4.0 * a * c;

    if (disc > 0) {
        printf("THE ROOTS ARE REAL & UNEQUAL:\n");
        root1 = (-b + sqrt(disc)) / (2.0 * a);
        root2 = (-b - sqrt(disc)) / (2.0 * a);
        printf("Root1=%f\n", root1);
        printf("Root2=%f\n", root2);
    }
    else if (disc == 0) {
        printf("THE ROOTS ARE REAL AND EQUAL:\n");
        root1 = -b / (2.0 * a);
        root2 = root1;
        printf("Root1=%f\n", root1);
        printf("Root2=%f\n", root2);
    }
    else {
        printf("THE ROOTS ARE IMAGINARY:\n");
        real = -b / (2.0 * a);
        img = sqrt(-disc) / (2.0 * fabs((double)a));
        printf("Root1=%f + i%f\n", real, img);
        printf("Root2=%f - i%f\n", real, img);
    }

    return 0;
}
