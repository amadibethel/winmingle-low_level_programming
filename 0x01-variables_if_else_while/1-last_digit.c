/**
 * Author: Bethel Amadi
 * Program: WinMingle Community C Training
 * Description: Prints the last digit of a random number and a description
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
    int n, last_digit;

    srand((unsigned int)time(NULL));
    n = rand() - RAND_MAX / 2;
    last_digit = n % 10;
    if (last_digit < 0)
        last_digit = -last_digit;

    printf("Last digit of %d is %d and is ", n, last_digit);

    if (last_digit > 5)
        printf("greater than 5\n");
    else if (last_digit == 0)
        printf("0\n");
    else
        printf("less than 6 and not 0\n");

    return (0);
}

