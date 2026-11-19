#include <stdio.h>

int copy_file(FILE *source, FILE *destination)
{
    int ch;
    while ((ch = fgetc(source)) != EOF) {
        if (fputc(ch, destination) == EOF)
            return 0;
    }
    return !ferror(source);
}

int main(void)
{
    FILE *fp1, *fp2, *fp3;
    char file1[100], file2[100], file3[100];

    puts("Program to merge two files....");
    printf("Enter first file name: ");
    if (scanf("%99s", file1) != 1) return 1;
    printf("Enter second file name: ");
    if (scanf("%99s", file2) != 1) return 1;
    printf("Enter destination file name: ");
    if (scanf("%99s", file3) != 1) return 1;

    fp1 = fopen(file1, "rb");
    if (fp1 == NULL) {
        printf("Error opening first file.\n");
        return 1;
    }

    fp2 = fopen(file2, "rb");
    if (fp2 == NULL) {
        printf("Error opening second file.\n");
        fclose(fp1);
        return 1;
    }

    fp3 = fopen(file3, "wb");
    if (fp3 == NULL) {
        printf("Error creating destination file.\n");
        fclose(fp1);
        fclose(fp2);
        return 1;
    }

    if (!copy_file(fp1, fp3) || !copy_file(fp2, fp3)) {
        printf("An error occurred while merging files.\n");
        fclose(fp1);
        fclose(fp2);
        fclose(fp3);
        return 1;
    }

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    printf("File Merging Successful....\n");
    return 0;
}
