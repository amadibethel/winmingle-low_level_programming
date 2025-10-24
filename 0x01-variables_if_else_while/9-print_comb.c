/**
 * Author: Bethel Amadi
 * Program: WinMingle Community C Training
 * Description: Prints digits 0-9 separated by comma and space
 */

#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
    int d;

    d = 0;
    while (d <= 9)
    {
        putchar('0' + d);
        if (d != 9)
        {
            putchar(',');
            putchar(' ');
        }
        d++;
    }
    putchar('\n');

    return (0);
}

