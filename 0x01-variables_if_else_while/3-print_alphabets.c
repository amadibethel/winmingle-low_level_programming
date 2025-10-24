/**
 * Author: Bethel Amadi
 * Program: WinMingle Community C Training
 * Description: Prints alphabet lowercase then uppercase using only putchar
 */

#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
    int ch;

    ch = 'a';
    while (ch <= 'z')
    {
        putchar(ch);
        ch++;
    }

    ch = 'A';
    while (ch <= 'Z')
    {
        putchar(ch);
        ch++;
    }

    putchar('\n');

    return (0);
}

