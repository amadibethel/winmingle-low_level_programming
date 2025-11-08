#include "main.h"

/**
 * print_number - prints an integer using _putchar
 * @n: integer to print
 */
static void print_number(int n)
{
    unsigned int num;

    if (n < 0)
    {
        _putchar('-');
        num = (unsigned int)(-n);
    }
    else
        num = (unsigned int)n;

    if (num / 10)
        print_number(num / 10);
    _putchar((char)('0' + (num % 10)));
}

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to the array
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
    int i;

    if (!a)
    {
        _putchar('\n');
        return;
    }

    for (i = 0; i < n; i++)
    {
        print_number(a[i]);
        if (i != n - 1)
        {
            _putchar(',');
            _putchar(' ');
        }
    }
    _putchar('\n');
}

