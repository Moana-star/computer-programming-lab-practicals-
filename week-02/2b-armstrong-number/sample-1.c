#include <stdio.h>
#include <math.h>
int main(void){int n,t,k=0,d;double s=0;printf("Enter a non-negative integer: ");if(scanf("%d",&n)!=1||n<0)return 1;t=n;do{k++;t/=10;}while(t);t=n;do{d=t%10;s+=pow(d,k);t/=10;}while(t);if((int)(s+0.5)==n)printf("%d is an Armstrong number.\n",n);else printf("%d is not an Armstrong number.\n",n);return 0;}