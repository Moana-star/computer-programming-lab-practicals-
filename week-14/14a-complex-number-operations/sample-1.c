#include <stdio.h>
#include <stdlib.h>
struct complex { float real, img; };

struct complex read_complex(void)
{
    struct complex c;
    printf("Enter real part of complex number: ");
    if (scanf("%f", &c.real) != 1) exit(1);
    printf("Enter imaginary part of complex number: ");
    if (scanf("%f", &c.img) != 1) exit(1);
    return c;
}
struct complex add_complex(struct complex a, struct complex b)
{
    struct complex c = {a.real + b.real, a.img + b.img}; return c;
}
struct complex sub_complex(struct complex a, struct complex b)
{
    struct complex c = {a.real - b.real, a.img - b.img}; return c;
}
struct complex mul_complex(struct complex a, struct complex b)
{
    struct complex c = {a.real*b.real - a.img*b.img, a.img*b.real + a.real*b.img}; return c;
}
struct complex div_complex(struct complex a, struct complex b)
{
    float d = b.real*b.real + b.img*b.img;
    struct complex c;
    if (d == 0.0f) { printf("Division by zero is not defined.\n"); exit(1); }
    c.real = (a.real*b.real + a.img*b.img)/d;
    c.img = (a.img*b.real - a.real*b.img)/d;
    return c;
}
void display_complex(struct complex c)
{
    printf("The result is: %.5f %c i%.5f\n", c.real, c.img < 0 ? '-' : '+', c.img < 0 ? -c.img : c.img);
}
int main(void)
{
    int choice;
    struct complex a, b, c;
    while (1) {
        printf("\nMenu for operation complex numbers\n");
        printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit Menu\n");
        printf("Enter Your Choice: ");
        if (scanf("%d", &choice) != 1) return 1;
        if (choice == 5) break;
        if (choice < 1 || choice > 4) { printf("Invalid choice\n"); continue; }
        printf("Enter First complex number\n"); a = read_complex();
        printf("Enter Second complex number\n"); b = read_complex();
        if (choice == 1) c = add_complex(a,b);
        else if (choice == 2) c = sub_complex(a,b);
        else if (choice == 3) c = mul_complex(a,b);
        else c = div_complex(a,b);
        display_complex(c);
    }
    return 0;
}