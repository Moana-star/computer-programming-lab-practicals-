#include <stdio.h>
#include <stdlib.h>
int main(void){int a,b,x,y,p,q;long long l;printf("Enter two integers: ");if(scanf("%d%d",&a,&b)!=2)return 1;x=abs(a);y=abs(b);p=x;q=y;while(q){int r=p%q;p=q;q=r;}l=p?(long long)x/p*y:0;printf("GCD = %d\nLCM = %lld\n",p,l);return 0;}