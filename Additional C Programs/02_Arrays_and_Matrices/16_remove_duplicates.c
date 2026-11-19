#include <stdio.h>
#define N 100
int main(void)
{
    int a[N],u[N],n,k=0;
    if(scanf("%d",&n)!=1||n<1||n>N)return 1;
    for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;
    for(int i=0;i<n;i++)
    {
        int seen=0;
        for(int j=0;j<k;j++)if(u[j]==a[i])seen=1;
        if(!seen)u[k++]=a[i];
    }
    printf("Unique values: ");
    for(int i=0;i<k;i++)printf("%d ",u[i]);
    puts("");
    return 0;
}
