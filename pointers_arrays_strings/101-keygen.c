#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random valid password for the crackme
 *
 * Return: 0
 */
int main(void)
{
    int i, sum = 0;
    int pin[100];
    const int len = 100;

    srand((unsigned int)time(NULL));
    for (i = 0; i < len; i++)
    {
        pin[i] = rand() % 78 + 48; /* printable-ish range */
        sum += pin[i];
    }

    /* adjust last byte so sum is 2772 (common pattern for this exercise)
       If you don't need that, it's safe to just print random characters.
       Many WinMingle / Holberton crackme solutions target a specific sum;
       keep this adjust here for compatibility. */
    while (sum % 2772 != 0)
    {
        pin[len - 1]++;
        sum++;
    }

    for (i = 0; i < len; i++)
        putchar(pin[i]);

    return (0);
}

