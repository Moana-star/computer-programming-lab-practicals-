#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[100], b[50], c[150];
    int pos, la, lb, i, j, k;

    printf("Enter a string: ");
    if (fgets(a, sizeof(a), stdin) == NULL) return 1;
    a[strcspn(a, "\n")] = '\0';

    printf("Enter sub string: ");
    if (fgets(b, sizeof(b), stdin) == NULL) return 1;
    b[strcspn(b, "\n")] = '\0';

    la = (int)strlen(a);
    lb = (int)strlen(b);

    printf("Enter position for insertion (1 to %d): ", la + 1);
    if (scanf("%d", &pos) != 1 || pos < 1 || pos > la + 1) {
        printf("Invalid insertion position.\n");
        return 1;
    }

    i = 0;
    for (j = 0; j < pos - 1; j++)
        c[i++] = a[j];

    for (j = 0; j < lb; j++)
        c[i++] = b[j];

    for (j = pos - 1; j < la; j++)
        c[i++] = a[j];

    c[i] = '\0';

    printf("String after Insertion is:\n%s\n", c);
    return 0;
}
