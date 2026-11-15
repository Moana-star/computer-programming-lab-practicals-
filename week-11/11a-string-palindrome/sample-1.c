#include <stdio.h>
#include <string.h>
int palindrome(char s[]){int i,n=(int)strlen(s);for(i=0;i<n/2;i++)if(s[i]!=s[n-1-i])return 0;return 1;}
int main(void){char s[100];printf("Enter a word: ");scanf("%99s",s);if(palindrome(s))puts("Palindrome.");else puts("Not a palindrome.");return 0;}