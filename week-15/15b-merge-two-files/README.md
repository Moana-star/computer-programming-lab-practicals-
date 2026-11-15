# WEEK 15 — FILE OPERATIONS

## 15(b) Write a C program to merge two files into a third file.

The first file's contents must appear first, followed by the contents of the second file.

### Sample 1

**Save as:** `Week15_15b_Sample1.c`

**Create `first1.txt`:**

```text
Hello
```

**Create `second1.txt`:**

```text
World
```

**C program**
```c
#include <stdio.h>

int main()
{
    FILE *fp1, *fp2, *fp3;
    int ch;
    char file1[100], file2[100], file3[100];

    printf("Enter first file name: ");
    scanf("%99s", file1);
    printf("Enter second file name: ");
    scanf("%99s", file2);
    printf("Enter destination file name: ");
    scanf("%99s", file3);

    fp1 = fopen(file1, "r");
    fp2 = fopen(file2, "r");

    if (fp1 == NULL || fp2 == NULL)
    {
        printf("Error opening input file.\n");
        if (fp1 != NULL)
            fclose(fp1);
        if (fp2 != NULL)
            fclose(fp2);
        return 1;
    }

    fp3 = fopen(file3, "w");
    if (fp3 == NULL)
    {
        printf("Error creating destination file.\n");
        fclose(fp1);
        fclose(fp2);
        return 1;
    }

    while ((ch = fgetc(fp1)) != EOF)
        fputc(ch, fp3);
    while ((ch = fgetc(fp2)) != EOF)
        fputc(ch, fp3);

    printf("File merging successful.\n");
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    return 0;
}
```

**Input**
```text
First file: first1.txt
Second file: second1.txt
Destination file: merge1.txt
```

**Working / calculation**
```text
First file = Hello
Second file = World
Merged contents: HelloWorld
```

**Output**
```text
Enter first file name: first1.txt
Enter second file name: second1.txt
Enter destination file name: merge1.txt
File merging successful.
```


### Sample 2

**Save as:** `Week15_15b_Sample2.c`

**Create `first2.txt`:**

```text
C programming
```

**Create `second2.txt`:**

```text
Laboratory
```

**C program**
```c
#include <stdio.h>

int main()
{
    FILE *fp1, *fp2, *fp3;
    int ch;
    char file1[100], file2[100], file3[100];

    printf("Enter first file name: ");
    scanf("%99s", file1);
    printf("Enter second file name: ");
    scanf("%99s", file2);
    printf("Enter destination file name: ");
    scanf("%99s", file3);

    fp1 = fopen(file1, "r");
    fp2 = fopen(file2, "r");

    if (fp1 == NULL || fp2 == NULL)
    {
        printf("Error opening input file.\n");
        if (fp1 != NULL)
            fclose(fp1);
        if (fp2 != NULL)
            fclose(fp2);
        return 1;
    }

    fp3 = fopen(file3, "w");
    if (fp3 == NULL)
    {
        printf("Error creating destination file.\n");
        fclose(fp1);
        fclose(fp2);
        return 1;
    }

    while ((ch = fgetc(fp1)) != EOF)
        fputc(ch, fp3);
    while ((ch = fgetc(fp2)) != EOF)
        fputc(ch, fp3);

    printf("File merging successful.\n");
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    return 0;
}
```

**Input**
```text
First file: first2.txt
Second file: second2.txt
Destination file: merge2.txt
```

**Working / calculation**
```text
First file = C programming
Second file = Laboratory
Merged contents: C programmingLaboratory
```

**Output**
```text
Enter first file name: first2.txt
Enter second file name: second2.txt
Enter destination file name: merge2.txt
File merging successful.
```


### Sample 3

**Save as:** `Week15_15b_Sample3.c`

**Create `first3.txt`:**

```text
Computer
```

**Create `second3.txt`:**

```text
Science
```

**C program**
```c
#include <stdio.h>

int main()
{
    FILE *fp1, *fp2, *fp3;
    int ch;
    char file1[100], file2[100], file3[100];

    printf("Enter first file name: ");
    scanf("%99s", file1);
    printf("Enter second file name: ");
    scanf("%99s", file2);
    printf("Enter destination file name: ");
    scanf("%99s", file3);

    fp1 = fopen(file1, "r");
    fp2 = fopen(file2, "r");

    if (fp1 == NULL || fp2 == NULL)
    {
        printf("Error opening input file.\n");
        if (fp1 != NULL)
            fclose(fp1);
        if (fp2 != NULL)
            fclose(fp2);
        return 1;
    }

    fp3 = fopen(file3, "w");
    if (fp3 == NULL)
    {
        printf("Error creating destination file.\n");
        fclose(fp1);
        fclose(fp2);
        return 1;
    }

    while ((ch = fgetc(fp1)) != EOF)
        fputc(ch, fp3);
    while ((ch = fgetc(fp2)) != EOF)
        fputc(ch, fp3);

    printf("File merging successful.\n");
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    return 0;
}
```

**Input**
```text
First file: first3.txt
Second file: second3.txt
Destination file: merge3.txt
```

**Working / calculation**
```text
First file = Computer
Second file = Science
Merged contents: ComputerScience
```

**Output**
```text
Enter first file name: first3.txt
Enter second file name: second3.txt
Enter destination file name: merge3.txt
File merging successful.
```


