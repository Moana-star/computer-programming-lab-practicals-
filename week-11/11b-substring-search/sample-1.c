/*
 * PRACTICAL 11(b): Write a C program that displays the position or index in the string S where the string T begins, or -1 if S doesn't contain T.
 * AIM: To display the position or index in the string S where the string T begins, or -1 if S doesn't contain T.
 * ALGORITHM: Start; read and display S; read and display T; find found=strstr(S,T); if found print found-S, otherwise print -1; Stop.
 * FLOWCHART: Start -> Read first string -> Read search string -> found=strstr(S,T) -> If found print index, otherwise print -1 -> Stop.
 * SAMPLE INPUT: First string: computer; string to be searched: mp
 * EXPECTED OUTPUT: Second string is found in the First String at 2 position.
 * RECORD: Record at least 3 results.
 */

#include <stdio.h>
#include <string.h>
int main(void){char s[200],t[100],*p;printf("Enter main string: ");scanf("%199s",s);printf("Enter substring: ");scanf("%99s",t);p=strstr(s,t);if(p)printf("Position = %ld\n",(long)(p-s));else puts("Position = -1");return 0;}