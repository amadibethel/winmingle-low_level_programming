/**
 * Author: Bethel Amadi
 * Program: WinMingle Community C Training
 * Description: Prints a quote to the standard error
 */

#include <unistd.h>

/**
 * main - Entry point
 * Return: 1 (Always)
 */
int main(void)
{
    write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
    return (1);
}

