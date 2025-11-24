#include "main.h"
#include <stdlib.h>

char *argstostr(int ac, char **av)
{
    int i, j, total = 0, k = 0;
    char *str;

    if (ac == 0 || av == NULL)
        return (NULL);

    for (i = 0; i < ac; i++)
    {
        j = 0;
        while (av[i][j] != '\0')
        {
            total++;
            j++;
        }
        total++; /* newline */
    }

    str = malloc((total + 1) * sizeof(char));
    if (str == NULL)
        return (NULL);

    for (i = 0; i < ac; i++)
    {
        j = 0;
        while (av[i][j] != '\0')
        {
            str[k++] = av[i][j];
            j++;
        }
        str[k++] = '\n';
    }
    str[k] = '\0';

    return (str);
}
