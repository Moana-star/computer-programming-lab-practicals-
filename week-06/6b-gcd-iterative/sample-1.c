/*
 * PRACTICAL 6(b): Write a C program to find the GCD of two given integers using non-recursive function.
 * AIM: To find the GCD of two given integers by using the non recursive function.
 * DESCRIPTION: GCD means Greatest Common Divisor, the highest number which divides the given numbers. Example: GCD(12,24) is 12.
 * ALGORITHM: Start; read a,b; call subprogram g=GCD(a,b); print g; in the subprogram calculate remainder=m-(m/n*n); if remainder==0 return n, otherwise call GCD(n,remainder); stop.
 * FLOWCHART: Main -> Read a,b -> Call GCD function -> Print GCD -> Stop.
 * SAMPLE INPUT: Enter the two numbers whose gcd is to be found: 5 25
 * EXPECTED OUTPUT: GCD of a,b is: 5
 * RECORD: Record at least 3 results.
 */

#include <stdio.h>
int main(void){int a,b,t;printf("Enter two integers: ");if(scanf("%d%d",&a,&b)!=2)return 1;if(a<0)a=-a;if(b<0)b=-b;while(b){t=b;b=a%b;a=t;}printf("GCD = %d\n",a);return 0;}