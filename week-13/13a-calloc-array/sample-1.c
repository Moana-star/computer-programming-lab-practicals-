/*
 * PRACTICAL 13(a): Write a C program to Display array elements using calloc() function.
 * AIM: To write a C program to find sum of n elements entered by user. To perform this program, allocate memory dynamically using calloc() function. (The manual's shown program displays the entered elements.)
 * ALGORITHM: Read number of elements n; allocate memory using calloc(n,sizeof(int)); read n numbers; display the numbers; return 0.
 * FLOWCHART: Start -> Read n -> Allocate array with calloc -> Read elements -> Display elements -> Stop.
 * SAMPLE INPUT: Number of elements to be entered: 3; numbers: 22, 55, 14
 * EXPECTED OUTPUT: The numbers entered are: 22 55 14
 * RECORD: Record at least 3 results.
 */

#include <stdio.h>
#include <stdlib.h>
int main(void){int n,i,*a;printf("Enter number of elements: ");if(scanf("%d",&n)!=1||n<=0||n>100)return 1;a=calloc((size_t)n,sizeof(int));if(!a){puts("Memory allocation failed.");return 1;}printf("Enter %d elements: ",n);for(i=0;i<n;i++)if(scanf("%d",&a[i])!=1){free(a);return 1;}printf("Array elements: ");for(i=0;i<n;i++)printf("%d%s",a[i],i==n-1?"\n":" ");free(a);return 0;}