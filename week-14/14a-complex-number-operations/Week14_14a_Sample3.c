#include <stdio.h>

struct complex
{
    float real, img;
};

struct complex read_complex()
{
    struct complex c;
    printf("Enter real part: ");
    scanf("%f", &c.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c.img);
    return c;
}

void display_complex(struct complex c)
{
    if (c.img < 0)
        printf("%.2f - i%.2f\n", c.real, -c.img);
    else
        printf("%.2f + i%.2f\n", c.real, c.img);
}

struct complex add_complex(struct complex a, struct complex b)
{
    struct complex c;
    c.real = a.real + b.real;
    c.img = a.img + b.img;
    return c;
}

struct complex sub_complex(struct complex a, struct complex b)
{
    struct complex c;
    c.real = a.real - b.real;
    c.img = a.img - b.img;
    return c;
}

struct complex mul_complex(struct complex a, struct complex b)
{
    struct complex c;
    c.real = a.real * b.real - a.img * b.img;
    c.img = a.real * b.img + a.img * b.real;
    return c;
}

struct complex div_complex(struct complex a, struct complex b)
{
    struct complex c;
    float d = b.real * b.real + b.img * b.img;
    c.real = (a.real * b.real + a.img * b.img) / d;
    c.img = (a.img * b.real - a.real * b.img) / d;
    return c;
}

int main()
{
    struct complex a, b, c;
    printf("Enter first complex number:\n");
    a = read_complex();
    printf("Enter second complex number:\n");
    b = read_complex();
    if (b.real == 0 && b.img == 0)
    {
        printf("Division by zero is not allowed.\n");
        return 1;
    }
    c = div_complex(a, b);
    printf("Division result: ");
    display_complex(c);
    return 0;
}