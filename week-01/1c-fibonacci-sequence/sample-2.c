#include <stdio.h>

int main(void) {
    int n, i;
    unsigned long long first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Enter a positive number of terms.\n");
        return 1;
    }

    printf("Fibonacci sequence: ");
    for (i = 1; i <= n; i++) {
        printf("%llu", first);
        if (i < n) printf(" ");
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
    return 0;
}
