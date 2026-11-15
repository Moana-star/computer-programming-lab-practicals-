#include <stdio.h>
unsigned long long f(int n){return n<=1?1:(unsigned long long)n*f(n-1);}
int main(void){int n;printf("Enter n (0-20): ");if(scanf("%d",&n)!=1||n<0||n>20)return 1;printf("Factorial = %llu\n",f(n));return 0;}