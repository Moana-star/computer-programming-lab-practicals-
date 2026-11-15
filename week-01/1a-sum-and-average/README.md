# 1(a) — Sum and average of three numbers

**Manual:** Week 01, Question 1(a). These are the same three sample values already used in this GitHub repository.

## Sample 1

**Save the program as:** `sample-1.c`

**Complete C code:**
```c
#include <stdio.h>

int main(void)
{
    int a, b, c, sum;
    float average;

    printf("Enter any three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c;
    average = sum / 3.0f;

    printf("Sum of three integers: %d\n", sum);
    printf("Average of three integers: %.2f\n", average);

    return 0;
}
```

**Input:**
```text
2 4 5
```

**Working / calculation:**
- Sum = 2 + 4 + 5 = 11
- Average = 11 / 3 = 3.67

**Expected output:**
```text
Enter any three integers: 2 4 5
Sum of three integers: 11
Average of three integers: 3.67
```

## Sample 2

**Save the program as:** `sample-2.c`

**Complete C code:**
```c
#include <stdio.h>

int main(void)
{
    int a, b, c, sum;
    float average;

    printf("Enter any three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c;
    average = sum / 3.0f;

    printf("Sum of three integers: %d\n", sum);
    printf("Average of three integers: %.2f\n", average);

    return 0;
}
```

**Input:**
```text
10 20 30
```

**Working / calculation:**
- Sum = 10 + 20 + 30 = 60
- Average = 60 / 3 = 20.00

**Expected output:**
```text
Enter any three integers: 10 20 30
Sum of three integers: 60
Average of three integers: 20.00
```

## Sample 3

**Save the program as:** `sample-3.c`

**Complete C code:**
```c
#include <stdio.h>

int main(void)
{
    int a, b, c, sum;
    float average;

    printf("Enter any three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c;
    average = sum / 3.0f;

    printf("Sum of three integers: %d\n", sum);
    printf("Average of three integers: %.2f\n", average);

    return 0;
}
```

**Input:**
```text
15 25 35
```

**Working / calculation:**
- Sum = 15 + 25 + 35 = 75
- Average = 75 / 3 = 25.00

**Expected output:**
```text
Enter any three integers: 15 25 35
Sum of three integers: 75
Average of three integers: 25.00
```

