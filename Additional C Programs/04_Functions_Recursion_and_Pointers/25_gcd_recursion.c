#include <stdio.h>
#include <stdlib.h>
int gcd(int a,int b)
{
    return b==0?a:gcd(b,a%b);
}
int main(void)
{
    int a,b;
    if(scanf("%d%d",&a,&b)!=2)return 1;
    a=abs(a);
    b=abs(b);
    printf("GCD = %d\n",gcd(a,b));
    return 0;
}
