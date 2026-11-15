#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char a[100];
    int n, count, i;

    if (argc != 3)
    {
        printf("Improper number of arguments.\n");
        return 1;
    }

    n = atoi(argv[2]);

    if (n < 0 || n >= 100)
    {
        printf("Invalid number of characters.\n");
        return 1;
    }

    fp = fopen(argv[1], "r");

    if (fp == NULL)
    {
        printf("File cannot be opened.\n");
        return 1;
    }

    count = fread(a, 1, n, fp);
    fclose(fp);

    printf("Reversed characters: ");

    for (i = count - 1; i >= 0; i--)
        printf("%c", a[i]);

    printf("\n");

    return 0;
}
