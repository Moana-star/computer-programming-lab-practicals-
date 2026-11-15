# 1(c) — Generate the first n terms of the Fibonacci sequence

**Manual:** Week 01, 1(c)

Each source file is a complete, standalone C program.

## Sample 1
**Source file:** `sample-1.c`
**Input:** `5`
**Working:** Start with 0 and 1; each next term is the sum of the previous two.
**Expected output:** `Fibonacci sequence: 0 1 1 2 3`

## Sample 2
**Source file:** `sample-2.c`
**Input:** `8`
**Working:** Continue the recurrence for eight terms.
**Expected output:** `Fibonacci sequence: 0 1 1 2 3 5 8 13`

## Sample 3
**Source file:** `sample-3.c`
**Input:** `10`
**Working:** Continue the recurrence for ten terms.
**Expected output:** `Fibonacci sequence: 0 1 1 2 3 5 8 13 21 34`

Compile with `gcc sample-1.c -o fibonacci`.
