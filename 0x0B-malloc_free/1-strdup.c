#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{
    char *dup;
    int i, len = 0;

    if (str == NULL)
        return (NULL);

    while (str[len] != '\0')
        len++;

    dup = malloc((len + 1) * sizeof(char));
    if (dup == NULL)
        return (NULL);

    for (i = 0; i < len; i++)
        dup[i] = str[i];

    dup[len] = '\0';
    return (dup);
}
