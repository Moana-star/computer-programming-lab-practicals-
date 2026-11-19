#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[100];
    int pos, n, length, i, j;

    printf("Enter a string: ");
    if (fgets(a, sizeof(a), stdin) == NULL) return 1;
    a[strcspn(a, "\n")] = '\0';

    length = (int)strlen(a);

    printf("Enter position for deletion (1 to %d): ", length);
    if (scanf("%d", &pos) != 1 || pos < 1 || pos > length) {
        printf("Invalid deletion position.\n");
        return 1;
    }

    printf("Enter number of characters to be deleted: ");
    if (scanf("%d", &n) != 1 || n < 0 || n > length - (pos - 1)) {
        printf("Invalid number of characters.\n");
        return 1;
    }

    i = pos - 1;
    j = i + n;
    while (a[j] != '\0') {
        a[i] = a[j];
        i++;
        j++;
    }
    a[i] = '\0';

    printf("String after Deletion is:\n%s\n", a);
    return 0;
}
