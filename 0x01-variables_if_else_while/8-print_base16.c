/**
 * Author: Bethel Amadi
 * Program: WinMingle Community C Training
 * Description: Prints base 16 numbers in lowercase
 */

#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
    int i;

    i = 0;
    while (i < 10)
    {
        putchar('0' + i);
        i++;
    }
    i = 0;
    while (i < 6)
    {
        putchar('a' + i);
        i++;
    }
    putchar('\n');

    return (0);
}

