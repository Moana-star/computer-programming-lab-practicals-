#include <stdio.h>
int gcd(int a,int b){return b==0?a:gcd(b,a%b);}
int main(void){int a,b;printf("Enter two integers: ");if(scanf("%d%d",&a,&b)!=2)return 1;if(a<0)a=-a;if(b<0)b=-b;printf("GCD = %d\n",gcd(a,b));return 0;}