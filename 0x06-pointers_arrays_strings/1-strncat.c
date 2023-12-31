#include "main.h"

/**
 * _strncat - A function that concatenates two strings
 * @dest: pointer
 * @src: pointer
 * @n: bytes value
 *
 * Return: dest pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
