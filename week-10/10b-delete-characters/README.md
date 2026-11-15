# 10b — Delete n characters from a given position in a string

**Manual:** Week 10, 10b

Each sample is a complete, standalone C program. String inputs in these examples are single words (no spaces).

## Sample 1

**Source file:** `sample-1.c`

**Input**

```text
COMPUTER
2 3
```

**Working / calculation**

Remove P,U,T from positions 2–4.

**Expected output**

```text
Result: CPUTER
```

## Sample 2

**Source file:** `sample-2.c`

**Input**

```text
PROGRAMMING
0 3
```

**Working / calculation**

Remove the first three characters PRO.

**Expected output**

```text
Result: GRAMMING
```

## Sample 3

**Source file:** `sample-3.c`

**Input**

```text
DATABASE
4 2
```

**Working / calculation**

Remove B,A at positions 4 and 5.

**Expected output**

```text
Result: DATASE
```

## Compile and run

```bash
gcc sample-1.c -o program
./program
```
