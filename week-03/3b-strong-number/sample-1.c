/*
 * PRACTICAL 3(b): Write a C program to check whether a number is strong number or not.
 * AIM: To check whether given number is strong number or not.
 * ALGORITHM: Read num; copy num to temp; while num is nonzero, initialize i=1,f=1; find factorial of digit r=num%10; add factorial to sum; num=num/10; compare sum and temp; print Strong number or not a Strong number.
 * FLOWCHART: Start -> Read number -> Extract digits -> Calculate factorial of each digit -> Add factorials -> Compare with original number -> Display result -> Stop.
 * SAMPLE INPUT: Enter a number: 145
 * EXPECTED OUTPUT: 145 is a strong number.
 * RECORD: Record at least 3 results.
 */

#include <stdio.h>
int fact(int n){int f=1,i;for(i=2;i<=n;i++)f*=i;return f;}
int main(void){int n,t,d,s=0;printf("Enter a non-negative integer: ");if(scanf("%d",&n)!=1||n<0)return 1;t=n;do{d=t%10;s+=fact(d);t/=10;}while(t);if(s==n)printf("%d is a strong number.\n",n);else printf("%d is not a strong number.\n",n);return 0;}