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