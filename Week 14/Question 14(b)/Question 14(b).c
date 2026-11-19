#include <stdio.h>

int main(void)
{
    FILE *fs;
    char fname[256];
    int ch;

    printf("Enter the file name: ");
    if (scanf("%255s", fname) != 1) {
        printf("Invalid file name.\n");
        return 1;
    }

    fs = fopen(fname, "r");
    if (fs == NULL) {
        printf("Source file cannot be opened.\n");
        return 1;
    }

    while ((ch = fgetc(fs)) != EOF)
        putchar(ch);

    if (ferror(fs)) {
        printf("\nError reading file.\n");
        fclose(fs);
        return 1;
    }

    fclose(fs);
    return 0;
}
