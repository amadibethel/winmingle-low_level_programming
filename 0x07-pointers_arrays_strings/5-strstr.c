#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: substring to find
 *
 * Return: pointer to substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
    int i = 0, j;

    if (needle[0] == '\0')
        return (haystack);

    while (haystack[i] != '\0')
    {
        if (haystack[i] == needle[0])
        {
            for (j = 0; needle[j] != '\0'; j++)
            {
                if (haystack[i + j] != needle[j])
                    break;
            }
            if (needle[j] == '\0')
                return (&haystack[i]);
        }
        i++;
    }

    return (0);
}
