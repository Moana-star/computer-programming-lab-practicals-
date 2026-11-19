#include <stdio.h>
#include <stdlib.h>

struct complex
{
    float real, img;
};

struct complex read_complex(void)
{
    struct complex c;
    printf("Enter real part of complex number: ");
    if (scanf("%f", &c.real) != 1) c.real = 0;
    printf("Enter imaginary part of complex number: ");
    if (scanf("%f", &c.img) != 1) c.img = 0;
    return c;
}

struct complex add_complex(struct complex c1, struct complex c2)
{
    struct complex c3 = {c1.real + c2.real, c1.img + c2.img};
    return c3;
}

struct complex sub_complex(struct complex c1, struct complex c2)
{
    struct complex c3 = {c1.real - c2.real, c1.img - c2.img};
    return c3;
}

struct complex mul_complex(struct complex c1, struct complex c2)
{
    struct complex c3;
    c3.real = c1.real * c2.real - c1.img * c2.img;
    c3.img = c1.img * c2.real + c2.img * c1.real;
    return c3;
}

struct complex div_complex(struct complex c1, struct complex c2)
{
    struct complex c3;
    float denominator = c2.real * c2.real + c2.img * c2.img;
    c3.real = (c1.real * c2.real + c1.img * c2.img) / denominator;
    c3.img = (c1.img * c2.real - c1.real * c2.img) / denominator;
    return c3;
}

void display_complex(struct complex c)
{
    char sign = '+';
    if (c.img < 0) {
        sign = '-';
        c.img = -c.img;
    }
    printf("The result is: %5f%ci%5f\n", c.real, sign, c.img);
}

int main(void)
{
    int choice;
    struct complex a, b, c;
    while (1) {
        printf("\n---------------------------------\n");
        printf("|Menu for operation complex numbers|\n");
        printf("----------------------------------\n");
        printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit Menu\n");
        printf("Enter Your Choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input.\n");
            return 1;
        }

        if (choice == 5)
            break;
        if (choice < 1 || choice > 4) {
            printf("Invalid choice\n");
            continue;
        }

        printf("Enter First complex number\n");
        a = read_complex();
        printf("Enter Second complex number\n");
        b = read_complex();

        switch (choice) {
            case 1:
                c = add_complex(a, b);
                display_complex(c);
                break;
            case 2:
                c = sub_complex(a, b);
                display_complex(c);
                break;
            case 3:
                c = mul_complex(a, b);
                display_complex(c);
                break;
            case 4:
                if (b.real == 0.0f && b.img == 0.0f) {
                    printf("Division by zero complex number is not allowed.\n");
                    break;
                }
                c = div_complex(a, b);
                display_complex(c);
                break;
        }
    }
    return 0;
}
