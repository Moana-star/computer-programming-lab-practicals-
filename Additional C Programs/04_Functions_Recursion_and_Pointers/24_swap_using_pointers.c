#include <stdio.h>
void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
int main(void)
{
    int x,y;
    printf("Enter two integers: ");
    if(scanf("%d%d",&x,&y)!=2)return 1;
    printf("Before: x=%d y=%d\n",x,y);
    swap(&x,&y);
    printf("After: x=%d y=%d\n",x,y);
    return 0;
}
