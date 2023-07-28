#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to be appended
 * @src: leading string
 *
 * Return: dest pointer
 */

char *_strcat(char *dest, char *src)
{
	int n, b;

	n = 0;
	b = 0;

	while (dest[n] != '\0')
	{
		n++;
	}
	while (src[b] != '\0')
	{
		dest[n] = src[b];
		b++;
		n++;
	}
	dest[n] = '\0';
	return (dest);
}
