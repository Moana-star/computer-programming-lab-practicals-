#include <stdio.h>
#include <string.h>
int main(void){char s[200],t[100],*p;printf("Enter main string: ");scanf("%199s",s);printf("Enter substring: ");scanf("%99s",t);p=strstr(s,t);if(p)printf("Position = %ld\n",(long)(p-s));else puts("Position = -1");return 0;}