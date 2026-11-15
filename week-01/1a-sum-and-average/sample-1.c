#include <stdio.h>

int main(void) {
    int a, b, c, sum;
    float average;

    printf("Enter three integers: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    sum = a + b + c;
    average = sum / 3.0f;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);
    return 0;
}
