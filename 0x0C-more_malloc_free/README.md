# WinMingle Community — 0x0C. C - More malloc, free

This project focuses on dynamic memory management in C, specifically the use of `malloc`, manual memory manipulation, and building higher-level memory utilities similar to standard C library functions.

## Learning Objectives

By the end of this project, you should be able to explain without Google:

- How to use the `exit` function
- What `calloc` does and how it works internally
- What `realloc` does and how to recreate its behavior manually
- How to dynamically allocate memory safely and efficiently

---

## WinMingle Academic Integrity Rules

- All work must be written **by you**
- **No plagiarism** of any kind
- **Do not publish** this project publicly
- Violations = **immediate removal** from the WinMingle Software Engineering Program

---

## Requirements

### C Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- Compilation:  
  ```
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- No global variables  
- No more than **5 functions per file**  
- Only allowed standard library functions:  
  - `malloc`
  - `free`
  - `exit`
- You may use `_putchar` (WinMingle provides its own)
- All prototypes stored in **main.h**

### Mandatory Files

- `main.h`
- `0-malloc_checked.c`
- `1-string_nconcat.c`
- `2-calloc.c`
- `3-array_range.c`
- `100-realloc.c`
- `101-mul.c`
- `README.md`

---

## Project Tasks Overview

### Task 0 — `malloc_checked`
Allocates memory or exits with status `98` if malloc fails.

### Task 1 — `string_nconcat`
Concatenates two strings with `n` bytes from `s2`.

### Task 2 — `_calloc`
Implements the behavior of standard `calloc`.

### Task 3 — `array_range`
Creates an array of integers from `min` to `max`.

### Task 4 — `_realloc`
Reallocates a memory block using custom logic.

### Task 5 — `mul` (big integer multiplication)
Multiplies two positive numbers passed as command-line arguments using manual digit-based multiplication.

---

## Directory Structure

```
0x0C-more_malloc_free/
│── main.h
│── README.md
│── 0-malloc_checked.c
│── 1-string_nconcat.c
│── 2-calloc.c
│── 3-array_range.c
│── 100-realloc.c
│── 101-mul.c
```

---

## Author

**WinMingle Community Software Engineering Program Student**

Building the next generation of world-class African software engineers.

