#include "main.h"
/**
 * puts_half - prints second half of a string
 * @str: A pointer to an changing integer
 *
 */
void puts_half(char *str)
{
	int n, last;

	n = 0;
	last = ((n + 1) / 2);

	while (str[n] != '\0')
	{
		n++;
	}
		for (n = last; str[n]; n++)
		{
			_putchar (str[n]);
		}
	_putchar ('\n');
}

