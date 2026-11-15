# 2a — Generate prime numbers between 1 and n

**Manual:** Week 02, 2a

Each sample is a complete, standalone C program.

## Sample 1

**Source file:** `sample-1.c`

**Input**

```text
10
```

**Working / calculation**

Check each integer from 2 to 10 and print it only when no divisor is found.

**Expected output**

```text
Prime numbers: 2 3 5 7
```

## Sample 2

**Source file:** `sample-2.c`

**Input**

```text
20
```

**Working / calculation**

Check each integer from 2 to 20 and print it only when no divisor is found.

**Expected output**

```text
Prime numbers: 2 3 5 7 11 13 17 19
```

## Sample 3

**Source file:** `sample-3.c`

**Input**

```text
30
```

**Working / calculation**

Check each integer from 2 to 30 and print it only when no divisor is found.

**Expected output**

```text
Prime numbers: 2 3 5 7 11 13 17 19 23 29
```

## Compile and run

```bash
gcc sample-1.c -o program -lm
./program
```
