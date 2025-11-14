#include "main.h"

/**
 * _strspn - gets prefix substring length
 * @s: string
 * @accept: accepted bytes
 *
 * Return: number of bytes in initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int i, j;

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; accept[j] != '\0'; j++)
        {
            if (s[i] == accept[j])
                break;
        }

        if (accept[j] == '\0')
            return (i);
    }

    return (i);
}
