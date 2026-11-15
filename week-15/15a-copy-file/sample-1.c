/*
 * PRACTICAL 15(a): Write a C program to copy the contents of one file to another.
 * AIM: Program which copies one file to another.
 * ALGORITHM: Start; read command line arguments; check argument count is 3; open source file in read mode; check source pointer; open destination file in write mode; check destination pointer; read each character from source and write to destination until EOF; close both files; Stop.
 * FLOWCHART: Start -> Read command line arguments -> Validate arguments -> Open source and destination -> Copy characters until EOF -> Close files -> Stop.
 * SAMPLE INPUT: a.txt contains: An array is a collection of elements of similar datatypes
 * EXPECTED OUTPUT: 57 bytes copied from 'a.txt' to 'b.txt'; 2 files closed.
 * RECORD: Record at least 3 results.
 */

#include <stdio.h>
int main(void)
{
    FILE *fs, *ft;
    int ch, count = 0;

    fs = fopen("a.txt", "r");
    if (fs == NULL) {
        printf("Source file opening error\n");
        return 1;
    }
    ft = fopen("b.txt", "w");
    if (ft == NULL) {
        printf("Target file opening error\n");
        fclose(fs);
        return 1;
    }
    while ((ch = fgetc(fs)) != EOF) {
        fputc(ch, ft);
        count++;
    }
    printf("%d bytes copied from 'a.txt' to 'b.txt'\n", count);
    fclose(fs);
    fclose(ft);
    printf("2 files closed\n");
    return 0;
}