#include <stdio.h>
int prime(int n)
{
    if(n<2)return 0;
    for(int i=2;i<=n/i;i++)if(n%i==0)return 0;
    return 1;
}
int main(void)
{
    int a,b,found=0;
    printf("Enter range: ");
    if(scanf("%d%d",&a,&b)!=2||a>b)return 1;
    for(int n=a;n<=b;n++)
    {
        if(prime(n))
        {
            printf("%d ",n);
            found=1;
        }
        if(n==2147483647)break;
    }
    if(!found)printf("No primes");
    puts("");
    return 0;
}
