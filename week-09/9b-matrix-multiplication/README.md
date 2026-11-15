# 9(b) — Multiply two matrices using functions

**Manual:** Week 09, 9(b). The program checks that the number of columns in the first matrix equals the number of rows in the second matrix.

## Sample 1
**Source file:** `sample-1.c`
**Input:** A is 2×2 (1 2; 3 4); B is 2×2 (5 6; 7 8).
**Working:** Each result entry is a row-column dot product.
**Expected output:**
```text
Product matrix:
19 22
43 50
```

## Sample 2
**Source file:** `sample-2.c`
**Input:** A is 1×2 (2 3); B is 2×1 (4; 5).
**Working:** 2×4 + 3×5 = 8 + 15 = 23.
**Expected output:**
```text
Product matrix:
23
```

## Sample 3
**Source file:** `sample-3.c`
**Input:** A is 2×3 (1 2 3; 4 5 6); B is 3×2 (7 8; 9 10; 11 12).
**Working:** Compute each row of A multiplied by each column of B.
**Expected output:**
```text
Product matrix:
58 64
139 154
```
