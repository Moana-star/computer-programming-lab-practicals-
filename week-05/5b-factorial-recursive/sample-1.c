/*
 * PRACTICAL 5(b): Write a C program to find the factorial of a given integer using recursive function.
 * AIM: To find the factorial of a given number using recursive function.
 * ALGORITHM: Main program: start; read n; call f=fact(n); print f; stop. Subprogram: if n==0 or n==1 return 1; otherwise return n*fact(n-1).
 * FLOWCHART: Main -> Read n -> Call fact(n) -> Print f -> Stop; recursive function tests base case and otherwise returns n*fact(n-1).
 * SAMPLE INPUT: ENTER A VALUE FOR n: 5
 * EXPECTED OUTPUT: THE FACTORIAL OF A GIVEN NUMBER IS..120
 * RECORD: Record at least 3 results.
 */

#include <stdio.h>
unsigned long long f(int n){return n<=1?1:(unsigned long long)n*f(n-1);}
int main(void){int n;printf("Enter n (0-20): ");if(scanf("%d",&n)!=1||n<0||n>20)return 1;printf("Factorial = %llu\n",f(n));return 0;}