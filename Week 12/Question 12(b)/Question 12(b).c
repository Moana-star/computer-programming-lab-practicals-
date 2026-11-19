#include <stdio.h>
#include <string.h>

int string_ln(char *p)
{
    int count = 0;
    while (*p != '\0') {
        count++;
        p++;
    }
    return count;
}

int main(void)
{
    char str[100];
    int length;

    printf("\nEnter any string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) return 1;
    str[strcspn(str, "\n")] = '\0';

    length = string_ln(str);
    printf("The length of the given string %s is: %d\n", str, length);

    return 0;
}
