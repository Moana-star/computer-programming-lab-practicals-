/*
 * PRACTICAL 1(c): Write a C program to generate the first n terms of the Fibonacci sequence.
 * AIM: To generate the first n terms of the Fibonacci sequence.
 * DESCRIPTION: First and second terms are 0 and 1; subsequent terms are found by adding the preceding two terms.
 * ALGORITHM: Start; read n; initialize f0=0, f1=1, f=0, i=0; while i<n print f0, calculate f=f0+f1, assign f0=f1 and f1=f, increment i; Stop.
 * FLOWCHART: Start -> Initialize f0=0,f1=1,i=0 -> while i<n: print f0, calculate next term, update terms, increment i -> Stop.
 * SAMPLE INPUT: ENTER THE VALUE FOR n: 10
 * EXPECTED OUTPUT: FIBONACCI SEQUENCE FOR THE FIRST 10 TERMS: 0 1 1 2 3 5 8 13 21 34
 * RECORD: Record at least 3 results.
 */

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