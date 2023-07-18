#include "main.h"

/**
 * print_sign -  prints the sign of a number
 * @n: number to be checked
 *
 * Return: 1 if n>0, 0 if n=0, -1 if n<0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}

