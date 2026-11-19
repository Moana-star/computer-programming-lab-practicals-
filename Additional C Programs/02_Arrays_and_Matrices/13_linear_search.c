#include <stdio.h>
#define N 100
int main(void)
{
    int a[N],n,x,pos=-1;
    if(scanf("%d",&n)!=1||n<1||n>N)return 1;
    for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;
    printf("Search value: ");
    if(scanf("%d",&x)!=1)return 1;
    for(int i=0;i<n;i++)if(a[i]==x)
    {
        pos=i;
        break;
    }
    if(pos<0)puts("Not found");
    else printf("Found at position %d\n",pos+1);
    return 0;
}
