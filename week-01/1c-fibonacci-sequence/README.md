# 1(c) — Generate the first n terms of the Fibonacci sequence

**Manual:** Week 01, Question 1(c). These are the same three sample values already used in this GitHub repository.

## Sample 1

**Save the program as:** `sample-1.c`

**Complete C code:**
```c
#include <stdio.h>

int main(void)
{
    int f0 = 0, f1 = 1, f, n, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Fibonacci sequence for the first %d terms:\n", n);

    i = 0;
    while (i < n)
    {
        printf("%d ", f0);
        f = f0 + f1;
        f0 = f1;
        f1 = f;
        i++;
    }

    return 0;
}
```

**Input:**
```text
5
```

**Working / calculation:**
Start with 0 and 1. Then 0 + 1 = 1, 1 + 1 = 2, and 1 + 2 = 3.

**Expected output:**
```text
Enter the value of n: 5
Fibonacci sequence for the first 5 terms:
0 1 1 2 3
```

## Sample 2

**Save the program as:** `sample-2.c`

**Complete C code:**
```c
#include <stdio.h>

int main(void)
{
    int f0 = 0, f1 = 1, f, n, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Fibonacci sequence for the first %d terms:\n", n);

    i = 0;
    while (i < n)
    {
        printf("%d ", f0);
        f = f0 + f1;
        f0 = f1;
        f1 = f;
        i++;
    }

    return 0;
}
```

**Input:**
```text
8
```

**Working / calculation:**
The first eight terms are 0, 1, 1, 2, 3, 5, 8, 13.

**Expected output:**
```text
Enter the value of n: 8
Fibonacci sequence for the first 8 terms:
0 1 1 2 3 5 8 13
```

## Sample 3

**Save the program as:** `sample-3.c`

**Complete C code:**
```c
#include <stdio.h>

int main(void)
{
    int f0 = 0, f1 = 1, f, n, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Fibonacci sequence for the first %d terms:\n", n);

    i = 0;
    while (i < n)
    {
        printf("%d ", f0);
        f = f0 + f1;
        f0 = f1;
        f1 = f;
        i++;
    }

    return 0;
}
```

**Input:**
```text
10
```

**Working / calculation:**
The first ten terms are 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.

**Expected output:**
```text
Enter the value of n: 10
Fibonacci sequence for the first 10 terms:
0 1 1 2 3 5 8 13 21 34
```

