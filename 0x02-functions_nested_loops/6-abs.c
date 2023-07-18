#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: integer to be checked
 *
 * Return: Always 0.
 *
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else if (n > 0)
	{
		return (n * 1);
	}
	return (0);

}
