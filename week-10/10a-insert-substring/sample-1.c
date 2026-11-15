/*
 * PRACTICAL 10(a): Write a C program to use function to insert a sub-string in to given main string from a given position.
 * AIM: To insert a string into another string from a specified position.
 * ALGORITHM: Start; read main string and substring; find lengths of both; read insertion position p; copy main string characters before p; copy substring at p; copy remaining main string characters; print resulting string; Stop.
 * FLOWCHART: Start -> Read main string and substring -> Read insertion position -> Copy prefix, inserted substring and suffix -> Display new string -> Stop.
 * SAMPLE INPUT: Main string: Comer; substring: put; position: 3
 * EXPECTED OUTPUT: Computer
 * RECORD: Record at least 3 results.
 */

#include <stdio.h>
#include <string.h>
int main(void){char s[200],t[100],out[300];int p,n,m,i;printf("Enter main string (no spaces): ");scanf("%199s",s);printf("Enter substring: ");scanf("%99s",t);printf("Enter insertion position (0-based): ");scanf("%d",&p);n=strlen(s);m=strlen(t);if(p<0||p>n)return 1;for(i=0;i<p;i++)out[i]=s[i];for(i=0;i<m;i++)out[p+i]=t[i];for(i=p;i<n;i++)out[m+i]=s[i];out[n+m]='\0';printf("Result: %s\n",out);return 0;}