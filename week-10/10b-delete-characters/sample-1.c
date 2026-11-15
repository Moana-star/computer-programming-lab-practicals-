/*
 * PRACTICAL 10(b): Write a C program that uses functions to delete n Characters from a given position in a given string.
 * AIM: To delete n Characters from a given position in a given string.
 * ALGORITHM: Start; read string; find its length; read number of characters to delete and position; copy characters before position and then copy remaining characters after the deleted section; Stop.
 * FLOWCHART: Start -> Read string -> Read position and number of characters -> Copy remaining portions around deleted range -> Display string -> Stop.
 * SAMPLE INPUT: String: jayapal; position: 4; number of characters to be deleted: 2
 * EXPECTED OUTPUT: jayal
 * RECORD: Record at least 3 results.
 */

#include <stdio.h>
#include <string.h>
int main(void){char s[200];int p,n,len,i;printf("Enter string (no spaces): ");scanf("%199s",s);printf("Enter position (0-based) and number of characters: ");if(scanf("%d%d",&p,&n)!=2)return 1;len=strlen(s);if(p<0||p>len||n<0)return 1;if(p+n>len)n=len-p;for(i=p;i+n<=len;i++)s[i]=s[i+n];s[len-n]='\0';printf("Result: %s\n",s);return 0;}