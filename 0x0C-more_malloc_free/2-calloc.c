#include "main.h"

/**
 * _calloc - allocates zero-initialized memory
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    unsigned int i, total;
    char *ptr;

    if (nmemb == 0 || size == 0)
        return (NULL);

    total = nmemb * size;

    ptr = malloc(total);
    if (ptr == NULL)
        return (NULL);

    for (i = 0; i < total; i++)
        ptr[i] = 0;

    return (ptr);
}

