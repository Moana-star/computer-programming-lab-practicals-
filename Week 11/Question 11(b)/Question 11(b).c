#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[100], t[50];
    char *found;

    printf("Enter the first string: ");
    if (fgets(s, sizeof(s), stdin) == NULL) return 1;
    s[strcspn(s, "\n")] = '\0';

    printf("Enter the string to be searched: ");
    if (fgets(t, sizeof(t), stdin) == NULL) return 1;
    t[strcspn(t, "\n")] = '\0';

    found = strstr(s, t);

    if (found)
        printf("Second String is found in the First String at %td position.\n", found - s);
    else
        printf("-1\n");

    return 0;
}
