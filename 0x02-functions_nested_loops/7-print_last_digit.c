#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @r: number to be checkd
 *
 * Return: value of the last digit
 */

int print_last_digit(int r)
{
	int n;

	if (r > 0 || r < 0)
	{
		(n = r % 10);
		_putchar(n);
		return (n);
	}
	else if (r == 0)
	{
		_putchar('0');
		return (0);
	}
}
