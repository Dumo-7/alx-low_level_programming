#include "main.h"

/**
 * rev_string - prints string in reverse followed by new line.
 * @s: pointer
 */

void rev_string(char *s)
{
	int n;

	n = 0;

	while (s[n] != '\0')
	{
		for (n = n - 1; n >= 0; n--)
		{
			n--;
		}
	}
}
