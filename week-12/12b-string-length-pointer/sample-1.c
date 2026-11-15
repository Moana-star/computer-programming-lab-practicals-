/*
 * PRACTICAL 12(b): Write a C program to find the length of the string using Pointer.
 * AIM: Not separately stated in the manual.
 * ALGORITHM: Not separately stated in the manual; declare a string and pointer function; pass the string to string_ln; initialize count=0; while *p!='\\0', increment count and pointer; return count and display length.
 * FLOWCHART: Start -> Read string -> Pass string to pointer function -> Count characters until null character -> Display length -> Stop.
 * SAMPLE INPUT: Enter the String: pritesh
 * EXPECTED OUTPUT: Length of the given string pritesh is: 7
 * RECORD: Record at least 3 results.
 */

#include <stdio.h>
int main(void){char s[200],*p;int n=0;printf("Enter a string (no spaces): ");scanf("%199s",s);p=s;while(*p){n++;p++;}printf("Length = %d\n",n);return 0;}