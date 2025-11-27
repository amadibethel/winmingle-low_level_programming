#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * is_digit - checks if a string contains only digits
 * @s: string
 * Return: 1 if digit, 0 otherwise
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - computes string length
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;
	while (s[len])
		len++;
	return (len);
}

/**
 * print_error - prints Error and exits
 */
void print_error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;
	int len1, len2, i, j, carry, n1, n2;
	int *result;

	if (argc != 3)
		print_error();

	num1 = argv[1];
	num2 = argv[2];

	if (!is_digit(num1) || !is_digit(num2))
		print_error();

	len1 = _strlen(num1);
	len2 = _strlen(num2);
	result = calloc(len1 + len2, sizeof(int));

	if (result == NULL)
		print_error();

	for (i = len1 - 1; i >= 0; i--)
	{
		n1 = num1[i] - '0';
		carry = 0;

		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			carry += result[i + j + 1] + (n1 * n2);
			result[i + j + 1] = carry % 10;
			carry /= 10;
		}
		result[i] += carry;
	}

	i = 0;
	while (result[i] == 0 && i < len1 + len2 - 1)
		i++;

	for (; i < len1 + len2; i++)
		_putchar(result[i] + '0');

	_putchar('\n');
	free(result);

	return (0);
}
