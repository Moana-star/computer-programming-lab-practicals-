/*
 * PRACTICAL 1(b): Write a C program to find the sum of individual digits of a given positive integer.
 * AIM: To find the sum of individual digits of positive integer.
 * DESCRIPTION: Ex: 1234; Summation = 1+2+3+4 = 10.
 * ALGORITHM: Start; read n; initialize sum=0; while(n!=0), set r=n%10, sum=sum+r, n=n/10; print sum; Stop.
 * FLOWCHART: Start -> Read n -> sum=0 -> while n!=0: r=n%10, sum=sum+r, n=n/10 -> Print sum -> Stop.
 * SAMPLE INPUT: ENTER A POSITIVE INTEGER: 5321
 * EXPECTED OUTPUT: THE SUM OF INDIVIDUAL DIGITS OF A POSITIVE INTEGER IS..11
 * RECORD: Record at least 3 results.
 */

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