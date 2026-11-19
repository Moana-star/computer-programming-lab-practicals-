#include <stdio.h>

struct student
{
    int rl;
    char nm[20];
    int m1;
    int m2;
    int m3;
    int t;
    float per;
};

int main(void)
{
    struct student a;

    printf("Enter RollNo, Name and three subject marks\n");
    if (scanf("%d%19s%d%d%d", &a.rl, a.nm, &a.m1, &a.m2, &a.m3) != 5) {
        printf("Invalid input.\n");
        return 1;
    }

    a.t = a.m1 + a.m2 + a.m3;
    a.per = a.t / 3.0f;

    printf("rollno=%d\n", a.rl);
    printf("Name=%s\n", a.nm);
    printf("m1=%d\n", a.m1);
    printf("m2=%d\n", a.m2);
    printf("m3=%d\n", a.m3);
    printf("total=%d\n", a.t);
    printf("per=%f\n", a.per);

    return 0;
}
