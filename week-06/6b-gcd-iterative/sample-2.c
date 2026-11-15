#include <stdio.h>
int main(void){int a,b,t;printf("Enter two integers: ");if(scanf("%d%d",&a,&b)!=2)return 1;if(a<0)a=-a;if(b<0)b=-b;while(b){t=b;b=a%b;a=t;}printf("GCD = %d\n",a);return 0;}