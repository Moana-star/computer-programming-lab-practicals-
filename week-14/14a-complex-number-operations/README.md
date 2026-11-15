# 14(a) — Complex-number operations using functions and structures

**Manual:** Week 14, 14(a). The earlier worked samples used the following exact complex numbers and calculations. The program includes functions for reading, displaying, addition, subtraction, multiplication and division.

## Sample 1
**Source file:** `sample-1.c`
**Input:** First number = 2 + 3i; second number = 4 + 5i.
**Calculation:** Addition: (2+4)+(3+5)i = 6+8i. Multiplication: (2×4−3×5)+(2×5+3×4)i = −7+22i.
**Expected relevant results:**
```text
Addition = 6.00 + 8.00i
Multiplication = -7.00 + 22.00i
```

## Sample 2
**Source file:** `sample-2.c`
**Input:** First number = 2 + 3i; second number = 4 + 5i.
**Calculation:** Multiplication: (2×4−3×5)+(2×5+3×4)i = −7+22i.
**Expected relevant result:**
```text
Multiplication = -7.00 + 22.00i
```

## Sample 3
**Source file:** `sample-3.c`
**Input:** First number = 4 + 2i; second number = 1 + i.
**Calculation:** (4+2i)/(1+i) = ((4+2i)(1−i))/((1+i)(1−i)) = (6−2i)/2 = 3−i.
**Expected relevant result:**
```text
Division = 3.00 - 1.00i
```

Compile: `gcc sample-1.c -o complex`.
