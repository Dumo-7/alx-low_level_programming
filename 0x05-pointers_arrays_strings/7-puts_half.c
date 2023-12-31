#include "main.h"
/**
 * puts_half - prints second half of a string
 * @str: A pointer to an changing integer
 *
 */
void puts_half(char *str)
{
	int len, mid, n;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	mid = len / 2;
	if (len % 2 == 0)
		for (n = mid; str[n] != '\0'; n++)
		{
			_putchar(str[n]);
		}
	else if (len % 2 != 0)
	{
		mid = ((len / 2) + 1);
		for (n = mid; str[n] != '\0'; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar ('\n');
}
