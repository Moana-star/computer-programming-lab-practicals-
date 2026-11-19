#include <stdio.h>
#define N 100
int main(void)
{
    int a[N],n;
    printf("Size (1-100): ");
    if(scanf("%d",&n)!=1||n<1||n>N)return 1;
    for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;
    for(int i=0;i<n-1;i++)
    {
        int changed=0;
        for(int j=0;j<n-i-1;j++)if(a[j]>a[j+1])
        {
            int t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
            changed=1;
        }
        if(!changed)break;
    }
    for(int i=0;i<n;i++)printf("%d ",a[i]);
    puts("");
    return 0;
}
