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