#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, n;
    int *a;

    printf("Number of elements to be entered: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Enter a positive number of elements.\n");
        return 1;
    }

    a = calloc((size_t)n, sizeof(int));
    if (a == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        if (scanf("%d", &a[i]) != 1) {
            printf("Invalid input.\n");
            free(a);
            return 1;
        }
    }

    printf("The numbers entered are: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    free(a);
    return 0;
}
