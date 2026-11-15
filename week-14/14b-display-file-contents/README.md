# WEEK 14 — COMPLEX NUMBERS AND FILE HANDLING

## 14(b) Write a C program to display the contents of a file.

### Sample 1

**Save as:** `Week14_14b_Sample1.c`

**Create `sample1.txt` with these contents:**\n\n```text\nthis is my first program\n```\n\n**C program**
```c
#include <stdio.h>

int main()
{
    FILE *fs;
    int ch;
    char fname[100];

    printf("Enter the file name: ");
    scanf("%99s", fname);
    fs = fopen(fname, "r");

    if (fs == NULL)
    {
        printf("Source file cannot be opened.\n");
        return 1;
    }

    while ((ch = fgetc(fs)) != EOF)
        putchar(ch);

    fclose(fs);
    return 0;
}
```

**Input**
```text
sample1.txt
```

**Working / calculation**
```text
Open the file in read mode and read each character with fgetc(), displaying it with putchar().
```

**Output**
```text
Enter the file name: sample1.txt\nthis is my first program
```


### Sample 2

**Save as:** `Week14_14b_Sample2.c`

**Create `sample2.txt` with these contents:**\n\n```text\nC programming laboratory\n```\n\n**C program**
```c
#include <stdio.h>

int main()
{
    FILE *fs;
    int ch;
    char fname[100];

    printf("Enter the file name: ");
    scanf("%99s", fname);
    fs = fopen(fname, "r");

    if (fs == NULL)
    {
        printf("Source file cannot be opened.\n");
        return 1;
    }

    while ((ch = fgetc(fs)) != EOF)
        putchar(ch);

    fclose(fs);
    return 0;
}
```

**Input**
```text
sample2.txt
```

**Working / calculation**
```text
Open the file in read mode and read each character with fgetc(), displaying it with putchar().
```

**Output**
```text
Enter the file name: sample2.txt\nC programming laboratory
```


### Sample 3

**Save as:** `Week14_14b_Sample3.c`

**Create `sample3.txt` with these contents:**\n\n```text\nComputer science students\n```\n\n**C program**
```c
#include <stdio.h>

int main()
{
    FILE *fs;
    int ch;
    char fname[100];

    printf("Enter the file name: ");
    scanf("%99s", fname);
    fs = fopen(fname, "r");

    if (fs == NULL)
    {
        printf("Source file cannot be opened.\n");
        return 1;
    }

    while ((ch = fgetc(fs)) != EOF)
        putchar(ch);

    fclose(fs);
    return 0;
}
```

**Input**
```text
sample3.txt
```

**Working / calculation**
```text
Open the file in read mode and read each character with fgetc(), displaying it with putchar().
```

**Output**
```text
Enter the file name: sample3.txt\nComputer science students
```


