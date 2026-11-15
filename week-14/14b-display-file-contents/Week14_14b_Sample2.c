#include <stdio.h>

int main()
{
    FILE *fs;
    int ch;
    char fname[100];

    printf("Enter the file name: ");
    scanf("%99s", fname);
    fs = fopen(fname, "r");

    if (fs == NULL)
    {
        printf("Source file cannot be opened.\n");
        return 1;
    }

    while ((ch = fgetc(fs)) != EOF)
        putchar(ch);

    fclose(fs);
    return 0;
}