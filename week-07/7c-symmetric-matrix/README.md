# 7c — Check whether a matrix is symmetric

**Manual:** Week 7, 7c

Each sample is a complete, standalone C program.

## Sample 1

**Source file:** `sample-1.c`

**Input**

```text
2
1 2
2 3
```

**Working / calculation**

Every element equals its transposed position.

**Expected output**

```text
Matrix is symmetric.
```

## Sample 2

**Source file:** `sample-2.c`

**Input**

```text
2
1 0
2 1
```

**Working / calculation**

a[0][1] differs from a[1][0].

**Expected output**

```text
Matrix is not symmetric.
```

## Sample 3

**Source file:** `sample-3.c`

**Input**

```text
3
1 2 3
2 4 5
3 5 6
```

**Working / calculation**

The matrix equals its transpose.

**Expected output**

```text
Matrix is symmetric.
```

Compile: `gcc sample-1.c -o program`.
