#include <stdio.h>
int main(void){char s[200],*p;int n=0;printf("Enter a string (no spaces): ");scanf("%199s",s);p=s;while(*p){n++;p++;}printf("Length = %d\n",n);return 0;}