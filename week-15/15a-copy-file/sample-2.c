#include <stdio.h>
int main(void)
{
    FILE *fp1, *fp2;
    char ch;
    int count = 0;

    fp1 = fopen("a2.txt", "r");
    fp2 = fopen("b2.txt", "w");

    if (fp1 == NULL || fp2 == NULL)
    {
        printf("File opening error.\n");
        return 1;
    }

    while ((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp2);
        count++;
    }

    fclose(fp1);
    fclose(fp2);

    printf("%d characters copied from 'a2.txt' to 'b2.txt'\n", count);
    return 0;
}