#include <stdio.h>

int main(void)
{
    FILE *fs, *ft;
    int ch;
    long count = 0;

    fs = fopen("a.txt", "rb");
    if (fs == NULL) {
        printf("Source file opening error\n");
        return 1;
    }

    ft = fopen("b.txt", "wb");
    if (ft == NULL) {
        printf("Target file opening error\n");
        fclose(fs);
        return 1;
    }

    while ((ch = fgetc(fs)) != EOF) {
        if (fputc(ch, ft) == EOF) {
            printf("Error writing to target file.\n");
            fclose(fs);
            fclose(ft);
            return 1;
        }
        count++;
    }

    if (ferror(fs)) {
        printf("Error reading source file.\n");
        fclose(fs);
        fclose(ft);
        return 1;
    }

    fclose(fs);
    fclose(ft);

    printf("%ld bytes copied from 'a.txt' to 'b.txt'\n", count);
    printf("2 files closed\n");
    return 0;
}
