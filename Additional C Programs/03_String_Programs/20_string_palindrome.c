#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){char s[300],c[300];int n=0,ok=1;if(!fgets(s,sizeof s,stdin))return 1;for(int i=0;s[i];i++)if(isalnum((unsigned char)s[i]))c[n++]=(char)tolower((unsigned char)s[i]);for(int i=0;i<n/2;i++)if(c[i]!=c[n-1-i])ok=0;puts(ok?"Palindrome":"Not a palindrome");return 0;}