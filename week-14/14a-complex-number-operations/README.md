# 14(a) — Complex-number operations using functions and structures

**Manual:** Week 14, 14(a). The program reads two complex numbers, displays their sum and product.

## Sample 1
**Source file:** `sample-1.c`
**Input:** `2 3` then `4 5`
**Working:** Sum = (2+4)+(3+5)i = 6+8i. Product = (2×4−3×5)+(2×5+3×4)i = −7+22i.
**Expected output:** `Sum = 6.00 + 8.00i`; `Product = -7.00 + 22.00i`.

## Sample 2
**Source file:** `sample-2.c`
**Input:** `1 2` then `3 4`
**Working:** Sum = 4+6i; product = (3−8)+(4+6)i = −5+10i.
**Expected output:** `Sum = 4.00 + 6.00i`; `Product = -5.00 + 10.00i`.

## Sample 3
**Source file:** `sample-3.c`
**Input:** `4 2` then `1 1`
**Working:** Sum = 5+3i; product = (4−2)+(4+2)i = 2+6i.
**Expected output:** `Sum = 5.00 + 3.00i`; `Product = 2.00 + 6.00i`.

Compile: `gcc sample-1.c -o complex`.
