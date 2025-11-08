#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 *
 * Return: length (int)
 */
int _strlen(char *s)
{
    int len = 0;

    if (!s)
        return (0);
    while (s[len] != '\0')
        len++;
    return (len);
}

