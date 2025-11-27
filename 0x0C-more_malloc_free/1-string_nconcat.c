#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of s2 to use
 *
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int i, j, len1 = 0, len2 = 0;
    char *ptr;

    if (s1 != NULL)
        while (s1[len1])
            len1++;

    if (s2 != NULL)
        while (s2[len2])
            len2++;

    if (n >= len2)
        n = len2;

    ptr = malloc(len1 + n + 1);
    if (ptr == NULL)
        return (NULL);

    for (i = 0; i < len1; i++)
        ptr[i] = s1[i];

    for (j = 0; j < n; j++)
        ptr[i + j] = s2[j];

    ptr[i + j] = '\0';

    return (ptr);
}
