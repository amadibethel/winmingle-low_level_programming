#include "main.h"

/**
 * puts_half - prints half of a string. If odd, prints from (len + 1) / 2
 * @str: the input string
 */
void puts_half(char *str)
{
    int len, start, i;

    if (!str)
    {
        _putchar('\n');
        return;
    }

    len = _strlen(str);
    if (len % 2 == 0)
        start = len / 2;
    else
        start = (len + 1) / 2;

    for (i = start; i < len; i++)
        _putchar(str[i]);
    _putchar('\n');
}

