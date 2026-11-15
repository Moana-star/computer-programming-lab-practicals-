# 10a — Insert a substring into a main string at a given position

**Manual:** Week 10, 10a

Each sample is a complete, standalone C program. String inputs in these examples are single words (no spaces).

## Sample 1

**Source file:** `sample-1.c`

**Input**

```text
COMPUTER
SCI
3
```

**Working / calculation**

Insert SCI after the first three characters: COM + SCI + PUTER.

**Expected output**

```text
COMSCI PUTER
```

## Sample 2

**Source file:** `sample-2.c`

**Input**

```text
HELLO
X
2
```

**Working / calculation**

Insert X after HE.

**Expected output**

```text
HEXLLO
```

## Sample 3

**Source file:** `sample-3.c`

**Input**

```text
GOOD
DAY
4
```

**Working / calculation**

Append DAY after GOOD.

**Expected output**

```text
GOODDAY
```

## Compile and run

```bash
gcc sample-1.c -o program
./program
```
