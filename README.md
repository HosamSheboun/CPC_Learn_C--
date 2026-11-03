# C++ Practice Projects

A collection of small, standalone C++ console exercises, organized by level and project number.

## Project progress

Every listed project has a `main.cpp` implementation. All 31 sources passed a g++ C++17 syntax check, and examples for Projects 23–31 were verified. There are no automated test suites yet.

Projects 19–22 have been reordered as requested: the original Project 20 is now Project 19, the original Project 21 is now Project 20, the original Project 22 is now Project 21, and the original Project 19 is now Project 22.

| Project | Topic |
|---|---|
| [Project 1](Level%200/Project%201/README.md) | Conditional transport choice |
| [Project 2](Level%200/Project%202/README.md) | Counting through a range of ages |
| [Project 3](Level%200/Project%203/README.md) | Greeting output |
| [Project 4 (P-A)](Level%200/Project%204%20%28P-A%29/README.md) | Reading and printing several data types |
| [Project 5 (P-B)](Level%200/Project%205%20%28P-B%29/README.md) | Basic arithmetic |
| [Project 6 (P-C)](Level%200/Project%206%20%28P-C%29/README.md) | Sorting three values |
| [Project 7 (P-D)](Level%200/Project%207%20%28P-D%29/README.md) | Circle area |
| [Project 8 (P-E)](Level%200/Project%208%20%28P-E%29/README.md) | Integer and fractional parts |
| [Project 9 (P-F)](Level%200/Project%209%20%28P-F%29/README.md) | Parity of the last digit |
| [Project 10 (P-G)](Level%200/Project%2010%20%28P-G%29/README.md) | Character classification |
| [Project 11 (P-H)](Level%200/Project%2011%20%28P-H%29/README.md) | Counting from 1 to N |
| [Project 12 (P-I)](Level%200/Project%2012%20%28P-I%29/README.md) | Even numbers up to N |
| [Project 13 (P-J)](Level%200/Project%2013%20%28P-J%29/README.md) | Fibonacci sequence |
| [Project 14 (P-K)](Level%200/Project%2014%20%28P-K%29/README.md) | Factorial |
| [Project 15 (P-L)](Level%200/Project%2015%20%28P-L%29/README.md) | Lucky numbers in a range |
| [Project 16](Level%200/Project%2016/README.md) | Input and display a four-element array |
| [Project 17](Level%200/Project%2017/README.md) | Input and display an array |
| [Project 18](Level%200/Project%2018/README.md) | Read and echo array values |
| [Project 19](Level%200/Project%2019/README.md) | Verbose linear-search demonstration |
| [Project 20](Level%200/Project%2020/README.md) | Array palindrome check |
| [Project 21](Level%200/Project%2021/README.md) | `switch` statement exercise |
| [Project 22 (P-A)](Level%200/Project%2022%20%28P-A%29/README.md) | Linear search |
| [Project 23 (P-B)](Level%200/Project%2023%20%28P-B%29/README.md) | Replace positive and negative array values |
| [Project 24 (P-C)](Level%200/Project%2024%20%28P-C%29/README.md) | Find the lowest number and its first position |
| [Project 25 (P-D)](Level%200/Project%2025%20%28P-D%29/README.md) | Print an array in reverse order |
| [Project 26 (P-E)](Level%200/Project%2026%20%28P-E%29/README.md) | Check whether an array is a palindrome |
| [Project 27 (P-F)](Level%200/Project%2027%20%28P-F%29/README.md) | Print two string lengths and combine the strings |
| [Project 28 (P-G)](Level%200/Project%2028%20%28P-G%29/README.md) | Print a line up to its first backslash |
| [Project 29 (P-H)](Level%200/Project%2029%20%28P-H%29/README.md) | Interleave two strings |
| [Project 30 (P-I)](Level%200/Project%2030%20%28P-I%29/README.md) | Sum the digits in a string |
| [Project 31 (P-J)](Level%200/Project%2031%20%28P-J%29/README.md) | Replace commas and toggle letter case |

Each project folder contains its own README and standalone `main.cpp`. See that README for the exercise summary and progress.

## Build and run

Use a C++ compiler with GNU extensions enabled (for example, g++). From the folder containing the project you want to run:

```powershell
g++ -std=gnu++17 main.cpp -o main.exe
.\main.exe
```

Programs that expect input read it from standard input. Check the project's source and README for the required values.

## Repository notes

Build executables locally and avoid committing generated binaries. Source files and project documentation are intended to be tracked. The repository is prepared locally; publishing it requires creating or selecting a GitHub repository and adding its remote.
