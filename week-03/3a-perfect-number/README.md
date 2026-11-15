# 3a — Check whether a number is a perfect number

**Manual:** Week 03, 3a

Each sample is a complete, standalone C program.

## Sample 1

**Source file:** `sample-1.c`

**Input**

```text
6
```

**Working / calculation**

Proper divisors: 1 + 2 + 3 = 6.

**Expected output**

```text
6 is a perfect number.
```

## Sample 2

**Source file:** `sample-2.c`

**Input**

```text
28
```

**Working / calculation**

Proper divisors: 1 + 2 + 4 + 7 + 14 = 28.

**Expected output**

```text
28 is a perfect number.
```

## Sample 3

**Source file:** `sample-3.c`

**Input**

```text
12
```

**Working / calculation**

Proper divisors: 1 + 2 + 3 + 4 + 6 = 16, not 12.

**Expected output**

```text
12 is not a perfect number.
```

## Compile and run

```bash
gcc sample-1.c -o program -lm
./program
```
