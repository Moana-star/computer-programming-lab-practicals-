# 15(b) — Merge two files into a third file

**Manual:** Week 15, 15(b). The program copies the first file followed immediately by the second file. The sample inputs include a trailing space in the first file where a word separator is needed.

## Sample 1

**Source program:** `sample-1.c`
**Inputs:** `sample-data/first-1.txt`, `sample-data/second-1.txt`, destination `merged-1.txt`
**First file contents:** `Hello `
**Second file contents:** `World`
**Working:** First file text + second file text = `Hello World`.
**Expected output:** `Merged files into merged-1.txt.`
**Destination file contents:** `Hello World`

## Sample 2

**Source program:** `sample-2.c`
**Inputs:** `sample-data/first-2.txt`, `sample-data/second-2.txt`, destination `merged-2.txt`
**First file contents:** `C programming `
**Second file contents:** `Laboratory`
**Working:** First file text + second file text = `C programming Laboratory`.
**Expected output:** `Merged files into merged-2.txt.`
**Destination file contents:** `C programming Laboratory`

## Sample 3

**Source program:** `sample-3.c`
**Inputs:** `sample-data/first-3.txt`, `sample-data/second-3.txt`, destination `merged-3.txt`
**First file contents:** `Computer `
**Second file contents:** `Science`
**Working:** First file text + second file text = `Computer Science`.
**Expected output:** `Merged files into merged-3.txt.`
**Destination file contents:** `Computer Science`
