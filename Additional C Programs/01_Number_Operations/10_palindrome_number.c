#include <stdio.h>
int main(void)
{
    unsigned int n,t;
    unsigned long long r=0;
    printf("Enter non-negative integer: ");
    if(scanf("%u",&n)!=1)return 1;
    t=n;
    do
    {
        r=r*10+t%10;
        t/=10;
    }
    while(t);
    printf("%u is %sa palindrome.\n",n,r==n?"":"not ");
    return 0;
}
