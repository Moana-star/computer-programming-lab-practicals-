#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char line[256];
    int characters = 0, words = 0, lines = 0;
    int in_word = 0, i;

    printf("TYPE ANY TEXT.\n");
    printf("Press Enter on an empty line to finish.\n");

    while (fgets(line, sizeof(line), stdin) != NULL) {
        if (line[0] == '\n' || line[0] == '\0')
            break;

        lines++;
        for (i = 0; line[i] != '\0' && line[i] != '\n'; i++) {
            characters++;
            if (isspace((unsigned char)line[i])) {
                in_word = 0;
            } else if (!in_word) {
                words++;
                in_word = 1;
            }
        }
        in_word = 0;
    }

    printf("\nNumber of lines = %d\n", lines);
    printf("Number of words = %d\n", words);
    printf("Number of characters = %d\n", characters);

    return 0;
}
