/*
 * PRACTICAL 15(b): Write a C program to merge two files into a third file (i.e., the contents of the first file followed by those of the second are put in the third).
 * AIM: Not separately stated in the manual.
 * ALGORITHM: Not separately stated in the manual; read first, second and destination file names; open first two files for reading and destination for writing; copy contents of first file to destination, then contents of second file; close files and display completion message.
 * FLOWCHART: Start -> Read three file names -> Open files -> Copy first file -> Copy second file -> Close files -> Display success -> Stop.
 * SAMPLE INPUT/OUTPUT: No fixed sample input/output is shown in the manual.
 * RECORD: Record at least 3 results.
 */

#include <stdio.h>
int main(void)
{
    FILE *fp1, *fp2, *fp3;
    char file1[100], file2[100], file3[100];
    int ch;

    puts("Program to merge two files....");
    printf("Enter first file name: ");
    if (scanf("%99s", file1) != 1) return 1;
    printf("Enter Second file name: ");
    if (scanf("%99s", file2) != 1) return 1;
    printf("Enter Destination file name: ");
    if (scanf("%99s", file3) != 1) return 1;

    fp1 = fopen(file1, "r");
    fp2 = fopen(file2, "r");
    if (fp1 == NULL || fp2 == NULL) {
        printf("Error opening input file.\n");
        if (fp1 != NULL) fclose(fp1);
        if (fp2 != NULL) fclose(fp2);
        return 1;
    }
    fp3 = fopen(file3, "w");
    if (fp3 == NULL) {
        printf("Error in creating destination file.\n");
        fclose(fp1); fclose(fp2);
        return 1;
    }
    while ((ch = fgetc(fp1)) != EOF) fputc(ch, fp3);
    while ((ch = fgetc(fp2)) != EOF) fputc(ch, fp3);
    puts("File Merging Successful....");
    fclose(fp1); fclose(fp2); fclose(fp3);
    return 0;
}