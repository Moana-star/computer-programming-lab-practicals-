#include <stdio.h>

int main()
{
    FILE *fp1, *fp2, *fp3;
    int ch;
    char file1[100], file2[100], file3[100];

    printf("Enter first file name: ");
    scanf("%99s", file1);

    printf("Enter second file name: ");
    scanf("%99s", file2);

    printf("Enter destination file name: ");
    scanf("%99s", file3);

    fp1 = fopen(file1, "r");
    fp2 = fopen(file2, "r");

    if (fp1 == NULL || fp2 == NULL)
    {
        printf("Error opening input file.\n");

        if (fp1 != NULL)
            fclose(fp1);

        if (fp2 != NULL)
            fclose(fp2);

        return 1;
    }

    fp3 = fopen(file3, "w");

    if (fp3 == NULL)
    {
        printf("Error creating destination file.\n");
        fclose(fp1);
        fclose(fp2);
        return 1;
    }

    while ((ch = fgetc(fp1)) != EOF)
        fputc(ch, fp3);

    while ((ch = fgetc(fp2)) != EOF)
        fputc(ch, fp3);

    printf("File merging successful.\n");

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    return 0;
}