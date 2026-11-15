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