#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */

char *cap_string(char *str)
{
	int index = 0;
	int cap_next = 1;

	while (str[index])
	{
		char a = str[index];

		if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
		{
			if (cap_next)
			{
				if (a >= 'a' && a <= 'z')
				{
					str[index] = a - ('a' - 'A');
				}
			cap_next = 0;
			}
			else
			{
				if (a >= 'A' && a <= 'Z')
				{
					str[index] = a + ('a' - 'A');
				}
			}
		}
		else
		{
			cap_next = 1;
		}

		index++;
	}

	return (str);
}
