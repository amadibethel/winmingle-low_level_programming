#include "main.h"
#include <stdlib.h>

char **strtow(char *str)
{
    int i = 0, w = 0, start, end, k = 0, len = 0;
    char **words;

    if (str == NULL || str[0] == '\0')
        return (NULL);

    while (str[len])
        len++;

    for (i = 0; i < len; i++)
        if (str[i] != ' ' &&
           (i == 0 || str[i - 1] == ' '))
            w++;

    if (w == 0)
        return (NULL);

    words = malloc((w + 1) * sizeof(char *));
    if (words == NULL)
        return (NULL);

    i = 0;
    while (i < len)
    {
        while (i < len && str[i] == ' ')
            i++;

        start = i;

        while (i < len && str[i] != ' ')
            i++;

        end = i;

        if (end > start)
        {
            int size = end - start;
            int c;

            words[k] = malloc((size + 1) * sizeof(char));
            if (words[k] == NULL)
            {
                while (k--)
                    free(words[k]);
                free(words);
                return (NULL);
            }

            for (c = 0; c < size; c++)
                words[k][c] = str[start + c];
            words[k][size] = '\0';

            k++;
        }
    }

    words[k] = NULL;
    return (words);
}
