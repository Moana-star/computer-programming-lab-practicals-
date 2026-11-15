#include <stdio.h>

int main()
{
    FILE *fs, *ft;
    int ch, count = 0;

    fs = fopen("a3.txt", "r");

    if (fs == NULL)
    {
        printf("Source file opening error\n");
        return 1;
    }

    ft = fopen("b3.txt", "w");

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

    printf("%d characters copied from 'a3.txt' to 'b3.txt'\n",
           count);

    fclose(fs);
    fclose(ft);

    return 0;
}
