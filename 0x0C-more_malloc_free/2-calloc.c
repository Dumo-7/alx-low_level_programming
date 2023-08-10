#include "main.h"
#include <stdlib.h>

/**
 *  _calloc - allocate memory for nmemb elements of size bytes
 *  @nmemb: number of element in the array
 *  @size: bytes for each position in array
 *
 *  Return: pointer void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *n;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	n = malloc(nmemb * size);
	if (n == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		n[i] = 0;
	}
	return (n);
	_putchar('\n');
}
