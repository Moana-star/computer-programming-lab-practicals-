#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    char a[100];
    FILE *fp;
    int k, n, i;

    if (argc != 3) {
        puts("Improper number of arguments.");
        return 1;
    }
    k = atoi(argv[2]);
    if (k < 0 || k >= (int)sizeof a) {
        puts("Invalid number of characters.");
        return 1;
    }
    fp = fopen(argv[1], "r");
    if (fp == NULL) {
        puts("File cannot be opened.");
        return 1;
    }
    n = (int)fread(a, 1, (size_t)k, fp);
    fclose(fp);
    a[n] = '\0';
    for (i = n - 1; i >= 0; i--) putchar(a[i]);
    putchar('\n');
    return 0;
}