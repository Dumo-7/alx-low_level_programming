#include "main.h"

/**
 * _strlen - return length of a string
 *@s: pointer to integer
 *
 * Return: void - correct
 */

int _strlen(char *s)
{
	int n;
/* assigning n*/

	n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}

