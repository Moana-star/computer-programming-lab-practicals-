# WEEK 14 — COMPLEX NUMBERS AND FILE HANDLING

## 14(a) Write a C program that uses functions and structures to perform operations on complex numbers.

The three samples demonstrate addition, multiplication and division.

### Sample 1 — Addition

**Save as:** `Week14_14a_Sample1.c`

**C program**
```c
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
    c = add_complex(a, b);
    printf("Addition result: ");
    display_complex(c);
    return 0;
}
```

**Input**
```text
First complex number:
Real part: 2
Imaginary part: 3

Second complex number:
Real part: 4
Imaginary part: 5
```

**Working / calculation**
```text
(2 + 3i) + (4 + 5i)
= (2 + 4) + (3 + 5)i
= 6 + 8i
```

**Output**
```text
Enter first complex number:
Enter real part: 2
Enter imaginary part: 3
Enter second complex number:
Enter real part: 4
Enter imaginary part: 5
Addition result: 6.00 + i8.00
```


### Sample 2 — Multiplication

**Save as:** `Week14_14a_Sample2.c`

**C program**
```c
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
    c = mul_complex(a, b);
    printf("Multiplication result: ");
    display_complex(c);
    return 0;
}
```

**Input**
```text
First complex number:
Real part: 2
Imaginary part: 3

Second complex number:
Real part: 4
Imaginary part: 5
```

**Working / calculation**
```text
(2 + 3i)(4 + 5i)
= 8 + 10i + 12i + 15i²
= 8 + 22i - 15
= -7 + 22i
```

**Output**
```text
Enter first complex number:
Enter real part: 2
Enter imaginary part: 3
Enter second complex number:
Enter real part: 4
Enter imaginary part: 5
Multiplication result: -7.00 + i22.00
```


### Sample 3 — Division

**Save as:** `Week14_14a_Sample3.c`

**C program**
```c
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
```

**Input**
```text
First complex number:
Real part: 4
Imaginary part: 2

Second complex number:
Real part: 1
Imaginary part: 1
```

**Working / calculation**
```text
(4 + 2i) / (1 + i)
Multiply numerator and denominator by (1 - i):
[(4 + 2i)(1 - i)] / [(1 + i)(1 - i)]
= (4 - 4i + 2i - 2i²) / (1 - i²)
= (6 - 2i) / 2
= 3 - i
```

**Output**
```text
Enter first complex number:
Enter real part: 4
Enter imaginary part: 2
Enter second complex number:
Enter real part: 1
Enter imaginary part: 1
Division result: 3.00 - i1.00
```


