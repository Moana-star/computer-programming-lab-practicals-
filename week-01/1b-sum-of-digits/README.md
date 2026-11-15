# 1(b) — Sum of individual digits of a positive integer

**Manual:** Week 01, Question 1(b). These are the same three sample values already used in this GitHub repository.

## Sample 1

**Save the program as:** `sample-1.c`

**Complete C code:**
```c
#include <stdio.h>

int main(void)
{
    int n, r, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (n != 0)
    {
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }

    printf("The sum of individual digits is: %d\n", sum);
    return 0;
}
```

**Input:**
```text
5321
```

**Working / calculation:**
5 + 3 + 2 + 1 = 11.

**Expected output:**
```text
Enter a positive integer: 5321
The sum of individual digits is: 11
```

## Sample 2

**Save the program as:** `sample-2.c`

**Complete C code:**
```c
#include <stdio.h>

int main(void)
{
    int n, r, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (n != 0)
    {
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }

    printf("The sum of individual digits is: %d\n", sum);
    return 0;
}
```

**Input:**
```text
2468
```

**Working / calculation:**
2 + 4 + 6 + 8 = 20.

**Expected output:**
```text
Enter a positive integer: 2468
The sum of individual digits is: 20
```

## Sample 3

**Save the program as:** `sample-3.c`

**Complete C code:**
```c
#include <stdio.h>

int main(void)
{
    int n, r, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (n != 0)
    {
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }

    printf("The sum of individual digits is: %d\n", sum);
    return 0;
}
```

**Input:**
```text
9005
```

**Working / calculation:**
9 + 0 + 0 + 5 = 14.

**Expected output:**
```text
Enter a positive integer: 9005
The sum of individual digits is: 14
```

