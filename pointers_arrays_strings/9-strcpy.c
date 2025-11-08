#include "main.h"

/**
 * _strcpy - copies the string pointed to by src including the null byte
 *            to the buffer pointed to by dest.
 * @dest: destination buffer
 * @src: source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
    int i = 0;

    if (!dest || !src)
        return (dest);
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

