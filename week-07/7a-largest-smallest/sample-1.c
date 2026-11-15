/*
 * PRACTICAL 7(a): Write a C program to find both the largest and smallest number in a list of integers.
 * AIM: To find the largest and smallest number in a list of integers.
 * ALGORITHM: Start; read n; initialize i=0; read a[i] while i<n; set small=a[0],large=a[0]; scan array; if a[i]<small assign small=a[i]; if a[i]>large assign large=a[i]; print small and large; Stop.
 * FLOWCHART: Start -> Read n and array elements -> Initialize small and large -> Compare each element -> Print smallest and largest -> Stop.
 * SAMPLE INPUT: Array size 10; elements: 7 10 9 8 6 5 2 3 4 1
 * EXPECTED OUTPUT: largest value is: 10; smallest value is: 1
 * RECORD: Record at least 3 results.
 */

#include <stdio.h>
int main(void){int n,a[100],i,hi,lo;printf("Enter count (1-100): ");if(scanf("%d",&n)!=1||n<1||n>100)return 1;for(i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;hi=lo=a[0];for(i=1;i<n;i++){if(a[i]>hi)hi=a[i];if(a[i]<lo)lo=a[i];}printf("Largest = %d\nSmallest = %d\n",hi,lo);return 0;}