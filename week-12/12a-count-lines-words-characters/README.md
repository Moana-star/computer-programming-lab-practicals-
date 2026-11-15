# 12a — Count lines, words and characters in a text file

**Manual:** Week 12, 12a

Each sample is a complete, standalone C program.

## Sample 1

**Source file:** `sample-1.c`

**Input**

```text
sample-data/text-1.txt
```

**Sample file:** `sample-data/text-1.txt`

**File contents**

```text
C programming\nis fun\n
```

**Working / calculation**

Two lines, four words and 21 characters including spaces and newlines.

**Expected output**

```text
Lines = 2
Words = 4
Characters = 21
```

## Sample 2

**Source file:** `sample-2.c`

**Input**

```text
sample-data/text-2.txt
```

**Sample file:** `sample-data/text-2.txt`

**File contents**

```text
Hello world
```

**Working / calculation**

One line, two words and 11 characters.

**Expected output**

```text
Lines = 1
Words = 2
Characters = 11
```

## Sample 3

**Source file:** `sample-3.c`

**Input**

```text
sample-data/text-3.txt
```

**Sample file:** `sample-data/text-3.txt`

**File contents**

```text
One two three\nFour
```

**Working / calculation**

Two lines, four words and 18 characters including the newline.

**Expected output**

```text
Lines = 2
Words = 4
Characters = 18
```

## Compile and run

```bash
gcc sample-1.c -o program
./program
```
