#include <stdio.h>
#include <string.h>

int main(void)
{
    char string[100], reverse_string[100];
    int i, length, flag = 1;

    printf("Enter a string: ");
    if (fgets(string, sizeof(string), stdin) == NULL) return 1;
    string[strcspn(string, "\n")] = '\0';

    length = (int)strlen(string);
    printf("The length of the string '%s' = %d\n", string, length);

    for (i = length - 1; i >= 0; i--)
        reverse_string[length - i - 1] = string[i];
    reverse_string[length] = '\0';

    for (i = 0; i < length; i++) {
        if (reverse_string[i] != string[i]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("%s is a palindrome\n", string);
    else
        printf("%s is not a palindrome\n", string);

    return 0;
}
