#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 * Return: pointer to the created grid (Success)
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int x, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	array = (int **) malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		array[x] = (int *) malloc(sizeof(int) * width);
		if (array[x] == NULL)
		{
			free(array);
			for (j = 0; j <= x; j++)
				free(array[j]);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (j = 0; j < width; j++)
		{
			array[x][j] = 0;
		}
	}
	return (array);
	_putchar('\n');
}
