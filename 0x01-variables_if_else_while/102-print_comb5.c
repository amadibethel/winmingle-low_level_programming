/**
 * Author: Bethel Amadi
 * Program: WinMingle Community C Training
 * Description: Prints all combinations of two two-digit numbers from 00 to 99
 */

#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
    int a, b;

    a = 0;
    while (a <= 98)
    {
        b = a + 1;
        while (b <= 99)
        {
            putchar('0' + (a / 10));
            putchar('0' + (a % 10));
            putchar(' ');
            putchar('0' + (b / 10));
            putchar('0' + (b % 10));
            if (!(a == 98 && b == 99))
            {
                putchar(',');
                putchar(' ');
            }
            b++;
        }
        a++;
    }
    putchar('\n');

    return (0);
}

