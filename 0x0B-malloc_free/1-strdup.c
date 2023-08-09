#include "main.h"
#include <stddef.h>
#include <stdlib.h>



/**
 * _strdup - string duplicator function
 * @str: string to be duplicated
 * Return: a string pointer
 */
char *_strdup(char *str)
{
	int a = 1, b = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[a])
		a++;
	s = (char *) malloc(a * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	while (b < a)
	{
		s[b] = str[b];
		b++;
	}
	s[b] = '\0';
	return (s);
	_putchar('\n');
}

