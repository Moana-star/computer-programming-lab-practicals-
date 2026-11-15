# 9b — Multiply two matrices using functions

**Manual:** Week 09, 9b

Each sample is a complete, standalone C program. String inputs in these examples are single words (no spaces).

## Sample 1

**Source file:** `sample-1.c`

**Input**

```text
2 2
2 2
1 2 3 4
5 6 7 8
```

**Working / calculation**

Each output entry is a row-column dot product.

**Expected output**

```text
19 22
43 50
```

## Sample 2

**Source file:** `sample-2.c`

**Input**

```text
1 2
2 1
2 3
4 5
```

**Working / calculation**

[2×4+3×5; 2×4+3×5] = 23 and 38 for the two rows.

**Expected output**

```text
23
38
```

## Sample 3

**Source file:** `sample-3.c`

**Input**

```text
2 3
3 2
1 2 3 4 5 6
7 8 9 10 11 12
```

**Working / calculation**

Compute each row of A multiplied by each column of B.

**Expected output**

```text
58 64
139 154
```

## Compile and run

```bash
gcc sample-1.c -o program
./program
```
