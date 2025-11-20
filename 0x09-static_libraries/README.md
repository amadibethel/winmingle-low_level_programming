# 0x09. C - Static Libraries  

WinMingle Software Engineering Program

## Introduction

This project introduces static libraries in C — what they are, how they work, how to create them, and how to use them in a real program.  
You will create your own static library `libmy.a` containing a collection of common C functions (re-created manually, without using the standard library).

## Learning Objectives

By the end of this project, you should understand:
- What a static library is
- How static libraries work internally
- How to create a static library using:
  - `ar`
  - `ranlib`
  - `nm`
- How to use a static library in a C program
- Why static libraries improve modularity and reuse

## Requirements

### C Requirements

- Editors: `vi`, `vim`, `emacs`
- Compile on **Ubuntu 20.04 LTS** using:

- No standard library functions (printf, puts, malloc, etc.)
- No global variables
- No more than 5 functions per file
- You may use `_putchar` (do NOT push `_putchar.c`)
- All prototypes must be in `main.h`

### Bash Script Requirements

- First line: `#!/bin/bash`
- Must be executable
- Must end with a new line
- Script must compile all `.c` files and create a static library `liball.a`

## Project Files

main.h
libmy.a
create_static_lib.sh
*.c (function implementations or stubs)

