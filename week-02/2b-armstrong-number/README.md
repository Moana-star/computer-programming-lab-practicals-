# 2b — Check whether a number is an Armstrong number

**Manual:** Week 02, 2b

Each sample is a complete, standalone C program.

## Sample 1

**Source file:** `sample-1.c`

**Input**

```text
153
```

**Working / calculation**

1³ + 5³ + 3³ = 153.

**Expected output**

```text
153 is an Armstrong number.
```

## Sample 2

**Source file:** `sample-2.c`

**Input**

```text
123
```

**Working / calculation**

1³ + 2³ + 3³ = 36, not 123.

**Expected output**

```text
123 is not an Armstrong number.
```

## Sample 3

**Source file:** `sample-3.c`

**Input**

```text
9474
```

**Working / calculation**

9⁴ + 4⁴ + 7⁴ + 4⁴ = 9474.

**Expected output**

```text
9474 is an Armstrong number.
```

## Compile and run

```bash
gcc sample-1.c -o program -lm
./program
```
