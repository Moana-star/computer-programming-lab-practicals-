/*
 * PRACTICAL 1(a): Write a C program to find sum and average of three numbers.
 * AIM: To find the sum and average of three numbers.
 * ALGORITHM: Start; declare num1,num2,num3,sum,average; read three numbers; sum=num1+num2+num3; average=sum/3; display sum and average; Stop.
 * FLOWCHART: Start -> Read three integers -> Calculate sum -> Calculate average -> Display sum and average -> Stop.
 * SAMPLE INPUT: Enter any three integers: 2 4 5
 * EXPECTED OUTPUT: Sum and average of three integers: 11 3
 * RECORD: Record at least 3 results.
 */

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