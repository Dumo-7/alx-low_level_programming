#include "main.h"
#include <stdlib.h>

/**
 * array_range - contain all values from min to max in that order
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *arr, i, n;

	i = 0;
	n = min;

	if (min > max)
	{
		return (0);
	}
	arr = malloc((max - min + 1) * sizeof(int));
	if (!arr)
	{
		return (0);
	}
	while (i <= max - min)
	{
		arr[i++] = n++;
	}
	return (arr);
	_putchar('\n');
}
