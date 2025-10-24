/**
 * Author: Bethel Amadi
 * Program: WinMingle Community C Training
 * Description: Assigns a random number to n and prints whether it is positive, negative, or zero
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
    int n;

    srand((unsigned int)time(NULL));
    n = rand() - RAND_MAX / 2;

    if (n > 0)
        printf("%d is positive\n", n);
    else if (n == 0)
        printf("%d is zero\n", n);
    else
        printf("%d is negative\n", n);

    return (0);
}

