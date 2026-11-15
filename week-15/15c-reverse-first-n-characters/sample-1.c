/*
 * PRACTICAL 15(c): Write a C program to reverse the first n characters in a file. Note: The file name and n are specified on the command line.
 * AIM: To reverse the first n characters in a file.
 * ALGORITHM: Read command line arguments; check argc==3; open source file in read mode; if NULL print file cannot be opened; set k=*argv[2]-48; read k characters using fread; store characters from last to first in another string; print reversed string; Stop.
 * FLOWCHART: Start -> Read command line arguments -> Validate arguments -> Open file -> Read first n characters -> Reverse into temporary string -> Print -> Stop.
 * SAMPLE INPUT: File source.c contains: this is source; command line arguments: source.c and 5
 * EXPECTED OUTPUT: ecruos si siht (the manual's displayed sample output).
 * RECORD: Record at least 3 results.
 */

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    char a[100];
    FILE *fp;
    int k, n, i;

    if (argc != 3) {
        puts("Improper number of arguments.");
        return 1;
    }
    k = atoi(argv[2]);
    if (k < 0 || k >= (int)sizeof a) {
        puts("Invalid number of characters.");
        return 1;
    }
    fp = fopen(argv[1], "r");
    if (fp == NULL) {
        puts("File cannot be opened.");
        return 1;
    }
    n = (int)fread(a, 1, (size_t)k, fp);
    fclose(fp);
    a[n] = '\0';
    for (i = n - 1; i >= 0; i--) putchar(a[i]);
    putchar('\n');
    return 0;
}