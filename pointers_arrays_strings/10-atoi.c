#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: integer representation
 */
int _atoi(char *s)
{
    int i = 0;
    int sign = 1;
    unsigned int result = 0;

    if (!s)
        return (0);

    /* skip whitespace */
    while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
           s[i] == '\v' || s[i] == '\f' || s[i] == '\r')
        i++;

    /* handle signs (multiple signs allowed: "--" => +) */
    while (s[i] == '+' || s[i] == '-')
    {
        if (s[i] == '-')
            sign *= -1;
        i++;
    }

    /* convert digits */
    while (s[i] >= '0' && s[i] <= '9')
    {
        result = result * 10 + (s[i] - '0');
        i++;
    }

    return ((int)(result * sign));
}

