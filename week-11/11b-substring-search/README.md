# 11b — Find the index where a substring begins, or -1

**Manual:** Week 11, 11b

Each sample is a complete, standalone C program. String inputs in these examples are single words (no spaces).

## Sample 1

**Source file:** `sample-1.c`

**Input**

```text
computer
put
```

**Working / calculation**

The substring put begins at index 3 (zero-based).

**Expected output**

```text
Position = 3
```

## Sample 2

**Source file:** `sample-2.c`

**Input**

```text
programming
gram
```

**Working / calculation**

The substring gram begins at index 2.

**Expected output**

```text
Position = 2
```

## Sample 3

**Source file:** `sample-3.c`

**Input**

```text
computer
science
```

**Working / calculation**

science does not occur in computer.

**Expected output**

```text
Position = -1
```

## Compile and run

```bash
gcc sample-1.c -o program
./program
```
