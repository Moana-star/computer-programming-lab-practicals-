# 13b — Calculate total and percentage marks using a structure

**Manual:** Week 13, 13b

Each sample is a complete, standalone C program.

## Sample 1

**Source file:** `sample-1.c`

**Input**

```text
12 rama
30 40 50
```

**Working / calculation**

Total = 30+40+50 = 120; percentage = 120/3 = 40%.

**Expected output**

```text
Roll No: 12
Name: rama
Total = 120.00
Percentage = 40.00%
```

## Sample 2

**Source file:** `sample-2.c`

**Input**

```text
25 moana
80 75 90
```

**Working / calculation**

Total = 80+75+90 = 245; percentage = 245/3 = 81.67%.

**Expected output**

```text
Roll No: 25
Name: moana
Total = 245.00
Percentage = 81.67%
```

## Sample 3

**Source file:** `sample-3.c`

**Input**

```text
31 alice
65 70 85
```

**Working / calculation**

Total = 65+70+85 = 220; percentage = 220/3 = 73.33%.

**Expected output**

```text
Roll No: 31
Name: alice
Total = 220.00
Percentage = 73.33%
```

## Compile and run

```bash
gcc sample-1.c -o program
./program
```
