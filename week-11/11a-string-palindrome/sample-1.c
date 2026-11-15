/*
 * PRACTICAL 11(a): Write a C program using user defined functions to determine whether the given string is palindrome or not.
 * AIM: To determine if the given string is palindrome or not.
 * DESCRIPTION: A palindrome means a string on reversal should be the same as the original. Example: madam.
 * ALGORITHM: Start; read string A; copy A into B; reverse B; compare A and B; if equal print palindrome, otherwise print not palindrome; Stop.
 * FLOWCHART: Start -> Read string -> Reverse a copy -> Compare original and reversed strings -> Display result -> Stop.
 * SAMPLE INPUT: madam
 * EXPECTED OUTPUT: The length of the string 'madam' = 5; madam is a palindrome.
 * RECORD: Record at least 3 results.
 */

#include <stdio.h>
#include <string.h>
int palindrome(char s[]){int i,n=(int)strlen(s);for(i=0;i<n/2;i++)if(s[i]!=s[n-1-i])return 0;return 1;}
int main(void){char s[100];printf("Enter a word: ");scanf("%99s",s);if(palindrome(s))puts("Palindrome.");else puts("Not a palindrome.");return 0;}