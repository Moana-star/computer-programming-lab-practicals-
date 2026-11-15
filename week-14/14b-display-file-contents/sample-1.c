/*
 * PRACTICAL 14(b): Write a C program to display the contents of a file.
 * AIM: To display the contents of a file.
 * ALGORITHM: Not separately stated in the manual; read file name; open source file in read mode; if file pointer is NULL print Source file cannot be opened; otherwise read characters until EOF and display them.
 * FLOWCHART: Start -> Read file name -> Open file -> Check file pointer -> Display characters until EOF / print error -> Stop.
 * SAMPLE INPUT: Enter the file name: sample.txt
 * EXPECTED OUTPUT: this is my first program
 * RECORD: Record at least 3 results.
 */

#include <stdio.h>
int main(void)
{
    FILE *fs;
    int ch;
    char fname[100];

    printf("Enter the file name: ");
    if (scanf("%99s", fname) != 1) return 1;
    fs = fopen(fname, "r");
    if (fs == NULL) {
        printf("Source file cannot be opened.\n");
        return 1;
    }
    while ((ch = fgetc(fs)) != EOF) putchar(ch);
    fclose(fs);
    return 0;
}