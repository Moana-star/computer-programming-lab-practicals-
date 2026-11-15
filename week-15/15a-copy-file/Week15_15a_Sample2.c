#include <stdio.h>

int main()
{
    FILE *fs, *ft;
    int ch, count = 0;

    fs = fopen("a2.txt", "r");

    if (fs == NULL)
    {
        printf("Source file opening error\n");
        return 1;
    }

    ft = fopen("b2.txt", "w");

    if (ft == NULL)
    {
        printf("Target file opening error\n");
        fclose(fs);
        return 1;
    }

    while ((ch = fgetc(fs)) != EOF)
    {
        fputc(ch, ft);
        count++;
    }

    printf("%d characters copied from 'a2.txt' to 'b2.txt'\n",
           count);

    fclose(fs);
    fclose(ft);

    return 0;
}
