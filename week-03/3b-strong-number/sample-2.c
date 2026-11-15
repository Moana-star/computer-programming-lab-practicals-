#include <stdio.h>
int fact(int n){int f=1,i;for(i=2;i<=n;i++)f*=i;return f;}
int main(void){int n,t,d,s=0;printf("Enter a non-negative integer: ");if(scanf("%d",&n)!=1||n<0)return 1;t=n;do{d=t%10;s+=fact(d);t/=10;}while(t);if(s==n)printf("%d is a strong number.\n",n);else printf("%d is not a strong number.\n",n);return 0;}