#include <stdio.h>

/**
 * main - prints sum of even Fibonacci numbers below 4,000,000
 * Return: Always 0
 */
int main(void)
{
	long a = 1, b = 2, next, sum = 0;

	while (b <= 4000000)
	{
		if (b % 2 == 0)
			sum += b;
		next = a + b;
		a = b;
		b = next;
	}
	printf("%ld\n", sum);
	return (0);
}

