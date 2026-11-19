#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char *a;
    long k, n, i;

    if (argc != 3) {
        printf("Improper number of arguments.\n");
        printf("Usage: %s filename number_of_characters\n", argv[0]);
        return 1;
    }

    char *endptr;
    k = strtol(argv[2], &endptr, 10);
    if (*argv[2] == '\0' || *endptr != '\0' || k < 0) {
        printf("Invalid number of characters.\n");
        return 1;
    }

    fp = fopen(argv[1], "rb");
    if (fp == NULL) {
        puts("File cannot be opened.");
        return 1;
    }

    a = malloc((size_t)k + 1);
    if (a == NULL) {
        printf("Memory allocation failed.\n");
        fclose(fp);
        return 1;
    }

    n = (long)fread(a, 1, (size_t)k, fp);
    if (ferror(fp)) {
        printf("Error reading file.\n");
        free(a);
        fclose(fp);
        return 1;
    }
    fclose(fp);

    a[n] = '\0';
    for (i = n - 1; i >= 0; i--)
        putchar((unsigned char)a[i]);
    putchar('\n');

    free(a);
    return 0;
}
