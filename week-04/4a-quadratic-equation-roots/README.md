# 4(a) — Find the roots of a quadratic equation

**Manual:** Week 04, 4(a)

## Sample 1
**Source file:** `sample-1.c`
**Input:** `1 -5 6`
**Working:** D = b² − 4ac = 25 − 24 = 1; roots = (5 ± 1)/2.
**Expected output:** `Roots: 3.00 and 2.00`

## Sample 2
**Source file:** `sample-2.c`
**Input:** `1 -4 4`
**Working:** D = 16 − 16 = 0; both roots are 2.
**Expected output:** `Roots: 2.00 and 2.00`

## Sample 3
**Source file:** `sample-3.c`
**Input:** `1 2 5`
**Working:** D = 4 − 20 = −16; roots are −1 ± 2i.
**Expected output:** `Complex roots: -1.00 + 2.00i and -1.00 - 2.00i`

Compile with `gcc sample-1.c -o roots -lm`.
