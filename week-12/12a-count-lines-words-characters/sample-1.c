/*
 * PRACTICAL 12(a): Write a C program to count the number of lines, words and characters in a given text.
 * AIM: To count the number of lines, words and characters in a given list.
 * ALGORITHM: Read text until an empty line; compare characters with newline to count lines; compare characters with tab or space to count words; detect end of text; count characters as the length of each line; print lines, words and characters; Stop.
 * FLOWCHART: Start -> Initialize counters -> Read line until empty line -> Count words, lines and characters -> Print totals -> Stop.
 * SAMPLE INPUT: Ramu is a good boy.
 * EXPECTED OUTPUT: Number of characters=18; Number of words=5; Number of lines=1.
 * RECORD: Record at least 3 results.
 */

#include <stdio.h>
#include <string.h>
int main(void)
{
    char line[256];
    int lines = 0, words = 0, characters = 0, i, in_word;

    printf("TYPE ANY TEXT. Give an empty line to finish.\n");
    while (fgets(line, sizeof line, stdin) != NULL) {
        if (line[0] == '\n' || line[0] == '\0')
            break;

        lines++;
        characters += (int)strcspn(line, "\n");

        in_word = 0;
        for (i = 0; line[i] != '\0' && line[i] != '\n'; i++) {
            if (line[i] == ' ' || line[i] == '\t')
                in_word = 0;
            else if (!in_word) {
                words++;
                in_word = 1;
            }
        }
    }

    printf("Number of lines = %d\n", lines);
    printf("Number of words = %d\n", words);
    printf("Number of characters = %d\n", characters);
    return 0;
}