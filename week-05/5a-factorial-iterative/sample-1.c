/*
 * PRACTICAL 5(a): Write a C program to find the factorial of a given integer using non-recursive function.
 * AIM: To find the factorial of a given number using non-recursive function.
 * ALGORITHM: Start; read n; call fact(n); store returned result in f; print f; in fact initialize f=1, loop i from 1 to n and calculate f=f*i; return f; Stop.
 * FLOWCHART: Main: Start -> Read n -> f=fact(n) -> Print f -> Stop. Function: f=1 -> loop i=1..n, f=f*i -> return f.
 * SAMPLE INPUT: ENTER A VALUE FOR n: 5
 * EXPECTED OUTPUT: THE FACTORIAL OF A GIVEN NUMBER IS..120
 * RECORD: Record at least 3 results.
 */

#include <stdio.h>
unsigned long long f(int n){unsigned long long x=1;int i;for(i=2;i<=n;i++)x*=i;return x;}
int main(void){int n;printf("Enter n (0-20): ");if(scanf("%d",&n)!=1||n<0||n>20)return 1;printf("Factorial = %llu\n",f(n));return 0;}