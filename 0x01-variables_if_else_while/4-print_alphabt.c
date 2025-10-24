/**
 * Author: Bethel Amadi
 * Program: WinMingle Community C Training
 * Description: Prints the alphabet in lowercase except q and e using only putchar
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
        if (ch != 'q' && ch != 'e')
            putchar(ch);
        ch++;
    }
    putchar('\n');

    return (0);
}

