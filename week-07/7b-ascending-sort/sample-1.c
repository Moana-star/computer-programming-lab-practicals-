/*
 * PRACTICAL 7(b): Write a C Program to Sort the Array in an Ascending Order.
 * AIM: Not separately stated in the manual.
 * ALGORITHM: Not separately stated in the manual; the printed program reads n numbers, compares each pair, swaps when number[i]>number[j], and prints the arranged array.
 * FLOWCHART: Not provided in the manual.
 * SAMPLE INPUT: N=6; numbers: 3, 78, 90, 456, 780, 200
 * EXPECTED OUTPUT: 3, 78, 90, 200, 456, 780
 * RECORD: Record at least 3 results.
 */

#include <stdio.h>
int main(void){int n,a[100],i,j,t;printf("Enter count (1-100): ");if(scanf("%d",&n)!=1||n<1||n>100)return 1;for(i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;for(i=0;i<n-1;i++)for(j=0;j<n-1-i;j++)if(a[j]>a[j+1]){t=a[j];a[j]=a[j+1];a[j+1]=t;}printf("Ascending order: ");for(i=0;i<n;i++)printf("%d%s",a[i],i==n-1?"\n":" ");return 0;}