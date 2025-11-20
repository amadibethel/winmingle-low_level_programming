# 0x0A. C - argc & argv

This project introduces command-line arguments in C:  
- `argc` → argument count  
- `argv` → argument vector (array of strings)

## Learning Objectives
You should be able to explain:
- How to use arguments passed to your program
- The two valid forms of `main()`:
  - `int main(int argc, char *argv[])`
  - `int main(void)`
- How arguments are passed to programs during execution
- How to avoid unused-variable warnings using:
  - `(void)variable;`  
  - `__attribute__((unused))`

## Requirements
- Editors: `vi`, `vim`, `emacs`
- Compilation:
- All files must end with a new line
- No global variables
- No more than 5 functions per file
- You may use standard library functions (`printf`, `atoi`, etc.)
- Header file: `main.h`

## Files
| File | Description |
|------|-------------|
| `0-whatsmyname.c` | Prints program name |
| `1-args.c` | Prints number of arguments |
| `2-args.c` | Prints all arguments |
| `3-mul.c` | Multiplies two numbers |
| `4-add.c` | Adds positive numbers |
| `100-change.c` | Minimum coins for change (advanced) |

## Repository
`winmingle-low_level_programming`

Directory:  
`0x0A-argc_argv/`
