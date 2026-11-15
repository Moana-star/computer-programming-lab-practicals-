# 11a — Determine whether a string is a palindrome using a function

**Manual:** Week 11, 11a

Each sample is a complete, standalone C program. String inputs in these examples are single words (no spaces).

## Sample 1

**Source file:** `sample-1.c`

**Input**

```text
level
```

**Working / calculation**

level reads the same in both directions.

**Expected output**

```text
Palindrome.
```

## Sample 2

**Source file:** `sample-2.c`

**Input**

```text
madam
```

**Working / calculation**

madam reads the same in both directions.

**Expected output**

```text
Palindrome.
```

## Sample 3

**Source file:** `sample-3.c`

**Input**

```text
computer
```

**Working / calculation**

computer is different when reversed.

**Expected output**

```text
Not a palindrome.
```

## Compile and run

```bash
gcc sample-1.c -o program
./program
```
