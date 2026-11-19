#include <stdio.h>
int main(void)
{
    int n,p=1;
    printf("Enter integer: ");
    if(scanf("%d",&n)!=1)return 1;
    if(n<2)p=0;
    for(int i=2;p&&i<=n/i;i++)if(n%i==0)p=0;
    printf("%d is %sprime.\n",n,p?"":"not ");
    return 0;
}
