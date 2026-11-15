#include <stdio.h>
int main(void)
{
    int a, b, c, sum;
    float average;

    printf("Enter any three integers: ");
    if (scanf("%d%d%d", &a, &b, &c) != 3)
        return 1;

    sum = a + b + c;
    average = sum / 3.0f;

    printf("Sum and average of three integers: %d %.2f\n", sum, average);
    return 0;
}