# WEEK 15 — FILE OPERATIONS

## 15(a) Write a C program to copy the contents of one file to another.

### Sample 1

**Save as:** `Week15_15a_Sample1.c`

**Create `a1.txt` containing:**\n\n```text\nAn array is a collection of elements.\n```\n\n**C program**
```c
#include <stdio.h>

int main()
{
    FILE *fs, *ft;
    int ch, count = 0;

    fs = fopen("a1.txt", "r");
    if (fs == NULL)
    {
        printf("Source file opening error\n");
        return 1;
    }

    ft = fopen("b1.txt", "w");
    if (ft == NULL)
    {
        printf("Target file opening error\n");
        fclose(fs);
        return 1;
    }

    while ((ch = fgetc(fs)) != EOF)
    {
        fputc(ch, ft);
        count++;
    }

    printf("%d characters copied from 'a1.txt' to 'b1.txt'\n", count);
    fclose(fs);
    fclose(ft);
    return 0;
}
```

**Input**
```text
The program reads a1.txt and writes to b1.txt.
```

**Working / calculation**
```text
Source file contains 37 characters.\nCharacters copied = 37
```

**Output**
```text
37 characters copied from 'a1.txt' to 'b1.txt'
```


### Sample 2

**Save as:** `Week15_15a_Sample2.c`

**Create `a2.txt` containing:**\n\n```text\nC programming\n```\n\n**C program**
```c
#include <stdio.h>

int main()
{
    FILE *fs, *ft;
    int ch, count = 0;

    fs = fopen("a2.txt", "r");
    if (fs == NULL)
    {
        printf("Source file opening error\n");
        return 1;
    }

    ft = fopen("b2.txt", "w");
    if (ft == NULL)
    {
        printf("Target file opening error\n");
        fclose(fs);
        return 1;
    }

    while ((ch = fgetc(fs)) != EOF)
    {
        fputc(ch, ft);
        count++;
    }

    printf("%d characters copied from 'a2.txt' to 'b2.txt'\n", count);
    fclose(fs);
    fclose(ft);
    return 0;
}
```

**Input**
```text
The program reads a2.txt and writes to b2.txt.
```

**Working / calculation**
```text
C programming\nC = 1 character\nSpace = 1 character\nprogramming = 11 characters\nTotal = 1 + 1 + 11 = 13 characters
```

**Output**
```text
13 characters copied from 'a2.txt' to 'b2.txt'
```


### Sample 3

**Save as:** `Week15_15a_Sample3.c`

**Create `a3.txt` containing:**\n\n```text\nFile handling in C\n```\n\n**C program**
```c
#include <stdio.h>

int main()
{
    FILE *fs, *ft;
    int ch, count = 0;

    fs = fopen("a3.txt", "r");
    if (fs == NULL)
    {
        printf("Source file opening error\n");
        return 1;
    }

    ft = fopen("b3.txt", "w");
    if (ft == NULL)
    {
        printf("Target file opening error\n");
        fclose(fs);
        return 1;
    }

    while ((ch = fgetc(fs)) != EOF)
    {
        fputc(ch, ft);
        count++;
    }

    printf("%d characters copied from 'a3.txt' to 'b3.txt'\n", count);
    fclose(fs);
    fclose(ft);
    return 0;
}
```

**Input**
```text
The program reads a3.txt and writes to b3.txt.
```

**Working / calculation**
```text
File handling in C\nFile = 4 characters\nSpaces = 2 characters\nhandling = 8 characters\nin = 2 characters\nC = 1 character\nTotal = 4 + 1 + 8 + 1 + 2 + 1 = 17 characters
```

**Output**
```text
17 characters copied from 'a3.txt' to 'b3.txt'
```


