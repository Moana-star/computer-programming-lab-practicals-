/*
 * PRACTICAL 3(a): Write a C program to check whether given number is perfect number or Not.
 * AIM: To check whether given number is perfect number or not.
 * ALGORITHM: Read n; assign i=1,sum=0; while i<n, if n%i==0 add i to sum; increment i; if sum==n print perfect number, otherwise print not a perfect number.
 * FLOWCHART: Start -> Read n -> Initialize i=1,sum=0 -> Test divisors below n and add divisors -> Compare sum with n -> Print result -> Stop.
 * SAMPLE INPUT: Enter a number: 6
 * EXPECTED OUTPUT: 6 is a perfect number.
 */

#include <stdio.h>
int main(void){int n,i,s=0;printf("Enter a positive integer: ");if(scanf("%d",&n)!=1||n<=0)return 1;for(i=1;i<=n/2;i++)if(n%i==0)s+=i;if(s==n)printf("%d is a perfect number.\n",n);else printf("%d is not a perfect number.\n",n);return 0;}