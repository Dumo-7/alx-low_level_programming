#include "main.h"

/**
 * _puts -  prints a string, followed by a new line.
 * @str: pointer to string
 *
 */

void _puts(char *str)
{
	char *s;
	int n;

	s = str;

	for (n = 0; s[n]; n++)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
