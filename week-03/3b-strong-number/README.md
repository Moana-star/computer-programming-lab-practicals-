# 3b — Check whether a number is a strong number

**Manual:** Week 03, 3b

Each sample is a complete, standalone C program.

## Sample 1

**Source file:** `sample-1.c`

**Input**

```text
145
```

**Working / calculation**

1! + 4! + 5! = 145.

**Expected output**

```text
145 is a strong number.
```

## Sample 2

**Source file:** `sample-2.c`

**Input**

```text
123
```

**Working / calculation**

1! + 2! + 3! = 9, not 123.

**Expected output**

```text
123 is not a strong number.
```

## Sample 3

**Source file:** `sample-3.c`

**Input**

```text
40585
```

**Working / calculation**

4! + 0! + 5! + 8! + 5! = 40585.

**Expected output**

```text
40585 is a strong number.
```

## Compile and run

```bash
gcc sample-1.c -o program -lm
./program
```
