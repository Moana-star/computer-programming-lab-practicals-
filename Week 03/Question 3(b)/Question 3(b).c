#include <stdio.h>

int main(void)
{
    int num, i, r, temp;
    long long f, sum = 0;

    printf("Enter a number: ");
    if (scanf("%d", &num) != 1 || num < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }

    temp = num;

    do
    {
        i = 1;
        f = 1;
        r = num % 10;

        while (i <= r)
        {
            f = f * i;
            i++;
        }

        sum = sum + f;
        num = num / 10;
    } while (num != 0);

    if (sum == temp)
        printf("%d is a strong number.\n", temp);
    else
        printf("%d is not a strong number.\n", temp);

    return 0;
}
