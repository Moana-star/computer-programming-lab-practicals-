#include <stdio.h>
unsigned long long f(int n){unsigned long long x=1;int i;for(i=2;i<=n;i++)x*=i;return x;}
int main(void){int n;printf("Enter n (0-20): ");if(scanf("%d",&n)!=1||n<0||n>20)return 1;printf("Factorial = %llu\n",f(n));return 0;}