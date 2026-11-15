#include <stdio.h>
#include <string.h>
int main(void){char s[200];int p,n,len,i;printf("Enter string (no spaces): ");scanf("%199s",s);printf("Enter position (0-based) and number of characters: ");if(scanf("%d%d",&p,&n)!=2)return 1;len=strlen(s);if(p<0||p>len||n<0)return 1;if(p+n>len)n=len-p;for(i=p;i+n<=len;i++)s[i]=s[i+n];s[len-n]='\0';printf("Result: %s\n",s);return 0;}