/*
 * PRACTICAL 2(a): Write a C program to generate all prime numbers between 1 and n.
 * AIM: To print prime numbers up to n.
 * DESCRIPTION: A prime number is exactly divisible by one and itself only. Examples: 2, 3, 5, 7.
 * ALGORITHM: Start; read n; initialize i=1; for each i<=n initialize fact=0; count divisors j from 1 to i; if i%j==0 increment fact; if fact==2 print i; increment i; Stop.
 * FLOWCHART: Start -> Read n -> Test each i from 1 to n -> Count divisors -> If divisor count is 2 print i -> Stop.
 * SAMPLE INPUT: Enter the number: 5
 * EXPECTED OUTPUT: 2 3 5
 * RECORD: Record at least 3 results.
 */

#include <stdio.h>
int main(void){int n,x,d,p;printf("Enter n: ");if(scanf("%d",&n)!=1||n<2)return 1;printf("Prime numbers: ");for(x=2;x<=n;x++){p=1;for(d=2;d*d<=x;d++)if(x%d==0){p=0;break;}if(p)printf("%d ",x);}puts("");return 0;}