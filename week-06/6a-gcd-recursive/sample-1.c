/*
 * PRACTICAL 6(a): Write a C program to find the GCD of two given integers by using the recursive function.
 * AIM: To find the GCD of two given integers by using the recursive function.
 * ALGORITHM: Main: start; read a,b; call GCD(a,b) and print the value; stop. Subprogram GCD(n,m): if n>m interchange by recursive call; if n==0 return m; otherwise return GCD(n,m%n).
 * FLOWCHART: Start -> Read a,b -> Call gcd(a,b) -> Print gcd value -> Stop.
 * SAMPLE INPUT: Enter the two numbers whose gcd is to be found: 5 25
 * EXPECTED OUTPUT: GCD of a,b is: 5
 * RECORD: Record at least 3 results.
 */

#include <stdio.h>
int gcd(int a,int b){return b==0?a:gcd(b,a%b);}
int main(void){int a,b;printf("Enter two integers: ");if(scanf("%d%d",&a,&b)!=2)return 1;if(a<0)a=-a;if(b<0)b=-b;printf("GCD = %d\n",gcd(a,b));return 0;}