#include <stdio.h>

int main(void)
{
    int i, j, a, n, number[30];

    printf("Enter the value of N: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 30) {
        printf("Enter a value of N from 1 to 30.\n");
        return 1;
    }

    printf("Enter the numbers\n");
    for (i = 0; i < n; ++i) {
        if (scanf("%d", &number[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    for (i = 0; i < n; ++i) {
        for (j = i + 1; j < n; ++j) {
            if (number[i] > number[j]) {
                a = number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }

    printf("The numbers arranged in ascending order are given below\n");
    for (i = 0; i < n; ++i)
        printf("%d\n", number[i]);

    return 0;
}
