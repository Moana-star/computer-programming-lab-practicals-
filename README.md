# Computer Programming Laboratory Practicals

A structured collection of C programming laboratory exercises based on the **Computer Programming Laboratory Manual**.

## Repository structure

Each practical question has its own folder. Every question folder contains three independently compilable C programs:

- `sample-1.c`
- `sample-2.c`
- `sample-3.c`
- `README.md` with sample inputs, working/calculations where relevant, and expected outputs.

File-handling practicals also include sample input text files under a `sample-data/` folder, with the expected destination-file contents documented.

## Weeks covered

| Week | Practical topics |
|---|---|
| 01 | Sum and average; sum of digits; Fibonacci sequence |
| 02 | Prime numbers; Armstrong number; algebraic expression |
| 03 | Perfect number; strong number |
| 04 | Quadratic roots; arithmetic operations using switch |
| 05 | Factorial using non-recursive and recursive functions |
| 06 | GCD using recursive and non-recursive functions |
| 07 | Largest and smallest; ascending sort; symmetric matrix |
| 08 | Revision of programs (no new practical listed) |
| 09 | Matrix addition; matrix multiplication using functions |
| 10 | Insert substring; delete characters from a string |
| 11 | String palindrome; locate a substring |
| 12 | Count lines, words and characters; string length using pointer |
| 13 | Display array elements using `calloc()`; student total and percentage using structure |
| 14 | Complex-number operations using functions and structures; display file contents |
| 15 | Copy a file; merge two files; reverse the first n characters in a file |
| 16 | Revision of programs (no new practical listed) |

## Compile and run

Using GCC:

```bash
gcc sample-1.c -o program
./program
```

On Windows PowerShell:

```powershell
gcc sample-1.c -o program.exe
.\program.exe
```

For file-handling programs, run the executable from the practical folder so the sample data paths work as documented.

## Notes

- Each sample is a separate complete C source file; compile one sample at a time.
- The sample outputs correspond to the inputs shown in that practical's README.
- The exercises follow the topics and order in the supplied laboratory manual. Week 8 and Week 16 are retained as revision weeks.
- These are learning and practice examples. Review the code and understand each step before submitting or demonstrating it.

## Language

C
