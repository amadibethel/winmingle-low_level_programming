#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	unsigned long a = 1, b = 2, next, i;

	printf("%lu, %lu", a, b);
	for (i = 3; i <= 98; i++)
	{
		next = a + b;
		printf(", %lu", next);
		a = b;
		b = next;
	}
	printf("\n");
	return (0);
}

