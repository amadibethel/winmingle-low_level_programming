#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
    unsigned int i = 0, j;

    while (s[i])
    {
        for (j = 0; accept[j]; j++)
        {
            if (s[i] == accept[j])
                break;
        }
        if (!accept[j])
            break;
        i++;
    }
    return i;
}
