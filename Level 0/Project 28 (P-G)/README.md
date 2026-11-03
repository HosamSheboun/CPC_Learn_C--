# Project 28 (P-G): Let's use Getline

## Overview

Reads a full line, including spaces, and prints everything before its first backslash (`\`).

## Progress

Implementation is complete. Both examples from the exercise were verified; automated tests are not included.

## Examples

Input:

```text
STEM CP club\) BLA!BLA!BLA!
```

Output:

```text
STEM CP club
```

Input:

```text
google \ facebook
```

Output:

```text
google
```

## Build and run

From this folder, build with `g++ -std=gnu++17 main.cpp -o main.exe` and run with `.\main.exe`. Enter one line containing a backslash.
