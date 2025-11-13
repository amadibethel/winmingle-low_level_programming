#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string
 * Return: pointer to string
 */
char *cap_string(char *s)
{
    int i = 0;
    char sep[] = " \t\n,;.!?\"(){}";

    while (s[i])
    {
        int j = 0;

        if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;

        while (sep[j])
        {
            if (s[i] == sep[j] && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
                s[i + 1] -= 32;
            j++;
        }
        i++;
    }
    return (s);
}


