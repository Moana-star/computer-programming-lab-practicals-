#include <stdio.h>

int main(void) {
    int number, digit, sum = 0;

    printf("Enter a positive integer: ");
    if (scanf("%d", &number) != 1 || number < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }

    while (number > 0) {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }

    printf("Sum of digits = %d\n", sum);
    return 0;
}
