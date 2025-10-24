/**
 * Author: Bethel Amadi
 * Program: WinMingle Community C Training
 * Description: Prints all different combinations of two digits
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
    while (a <= 8)
    {
        b = a + 1;
        while (b <= 9)
        {
            putchar('0' + a);
            putchar('0' + b);
            if (!(a == 8 && b == 9))
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

