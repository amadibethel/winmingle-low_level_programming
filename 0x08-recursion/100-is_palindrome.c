#include "main.h"

int check_pal(char *s, int start, int end)
{
    if (start >= end)
        return (1);

    if (s[start] != s[end])
        return (0);

    return (check_pal(s, start + 1, end - 1));
}

int _strlen_recursion(char *s);

int is_palindrome(char *s)
{
    int len = _strlen_recursion(s);

    return (check_pal(s, 0, len - 1));
}
