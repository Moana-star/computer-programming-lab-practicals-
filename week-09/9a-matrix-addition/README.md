# 9a — Add two matrices

**Manual:** Week 09, 9a

Each sample is a complete, standalone C program. String inputs in these examples are single words (no spaces).

## Sample 1

**Source file:** `sample-1.c`

**Input**

```text
2 2
1 2 3 4
5 6 7 8
```

**Working / calculation**

Add corresponding elements: [1+5, 2+6; 3+7, 4+8].

**Expected output**

```text
6 8
10 12
```

## Sample 2

**Source file:** `sample-2.c`

**Input**

```text
2 2
1 0 2 1
3 4 5 6
```

**Working / calculation**

Add corresponding elements of the two 2×2 matrices.

**Expected output**

```text
4 4
7 10
```

## Sample 3

**Source file:** `sample-3.c`

**Input**

```text
2 3
1 2 3 4 5 6
6 5 4 3 2 1
```

**Working / calculation**

Add each pair of corresponding elements.

**Expected output**

```text
7 7 7
7 7 7
```

## Compile and run

```bash
gcc sample-1.c -o program
./program
```
