#include <stdio.h>
#define M 10
int main(void)
{
    int a[M][M],b[M][M],r,c;
    if(scanf("%d%d",&r,&c)!=2||r<1||r>M||c<1||c>M)return 1;
    for(int i=0;i<r;i++)for(int j=0;j<c;j++)if(scanf("%d",&a[i][j])!=1)return 1;
    for(int i=0;i<r;i++)for(int j=0;j<c;j++)if(scanf("%d",&b[i][j])!=1)return 1;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)printf("%d ",a[i][j]+b[i][j]);
        puts("");
    }
    return 0;
}
