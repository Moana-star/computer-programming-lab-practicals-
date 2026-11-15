# WEEK 15 — FILE OPERATIONS

## 15(c) Write a C program to reverse the first n characters in a file.

**Note from the manual:** The filename and the number of characters to reverse are supplied through command-line arguments.

### Sample 1

**Save as:** `Week15_15c_Sample1.c`

**Create `reverse1.txt` containing:**

```text
COMPUTER
```

**C program**
```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char a[100];
    int n, count, i;

    if (argc != 3)
    {
        printf("Improper number of arguments.\n");
        return 1;
    }

    n = atoi(argv[2]);
    if (n < 0 || n >= 100)
    {
        printf("Invalid number of characters.\n");
        return 1;
    }

    fp = fopen(argv[1], "r");
    if (fp == NULL)
    {
        printf("File cannot be opened.\n");
        return 1;
    }

    count = fread(a, 1, n, fp);
    fclose(fp);

    printf("Reversed characters: ");
    for (i = count - 1; i >= 0; i--)
        printf("%c", a[i]);
    printf("\n");
    return 0;
}
```

**Input**
```text
./Week15_15c_Sample1 reverse1.txt 4
```

**Working / calculation**
```text
First 4 characters = C O M P
Reverse = P M O C
```

**Output**
```text
Reversed characters: PMOC
```


### Sample 2

**Save as:** `Week15_15c_Sample2.c`

**Create `reverse2.txt` containing:**

```text
PROGRAMMING
```

**C program**
```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char a[100];
    int n, count, i;

    if (argc != 3)
    {
        printf("Improper number of arguments.\n");
        return 1;
    }

    n = atoi(argv[2]);
    if (n < 0 || n >= 100)
    {
        printf("Invalid number of characters.\n");
        return 1;
    }

    fp = fopen(argv[1], "r");
    if (fp == NULL)
    {
        printf("File cannot be opened.\n");
        return 1;
    }

    count = fread(a, 1, n, fp);
    fclose(fp);

    printf("Reversed characters: ");
    for (i = count - 1; i >= 0; i--)
        printf("%c", a[i]);
    printf("\n");
    return 0;
}
```

**Input**
```text
./Week15_15c_Sample2 reverse2.txt 5
```

**Working / calculation**
```text
First 5 characters = P R O G R
Reverse = R G O R P
```

**Output**
```text
Reversed characters: RGORP
```


### Sample 3

**Save as:** `Week15_15c_Sample3.c`

**Create `reverse3.txt` containing:**

```text
COMPUTER SCIENCE
```

**C program**
```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char a[100];
    int n, count, i;

    if (argc != 3)
    {
        printf("Improper number of arguments.\n");
        return 1;
    }

    n = atoi(argv[2]);
    if (n < 0 || n >= 100)
    {
        printf("Invalid number of characters.\n");
        return 1;
    }

    fp = fopen(argv[1], "r");
    if (fp == NULL)
    {
        printf("File cannot be opened.\n");
        return 1;
    }

    count = fread(a, 1, n, fp);
    fclose(fp);

    printf("Reversed characters: ");
    for (i = count - 1; i >= 0; i--)
        printf("%c", a[i]);
    printf("\n");
    return 0;
}
```

**Input**
```text
./Week15_15c_Sample3 reverse3.txt 8
```

**Working / calculation**
```text
First 8 characters = C O M P U T E R
Reverse = R E T U P M O C
```

**Output**
```text
Reversed characters: RETUPMOC
```


**Compile and run:** `gcc Week15_15c_Sample1.c -o reverse`, then `./reverse reverse1.txt 4`. The program displays the reversed characters and does not modify the original file.
