/**
 * Author: Bethel Amadi
 * Program: WinMingle Community C Training
 * Description: Prints single digit numbers 0 to 9 using putchar and no char variables
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
        d++;
    }
    putchar('\n');

    return (0);
}

