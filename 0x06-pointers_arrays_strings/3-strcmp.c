#include "main.h"

/**
 * _strcmp - compares two lines of strings
 * @s1: pointer to a character to be compared
 * @s2: A pointer to a character that will be compared
 *
 * Return: *stra_a - *str_b
 */

int _strcmp(char *s1, char *s2)
{
	char *str_a = s1;
	char *str_b = s2;

	while (*str_a != '\0' && *str_b != '\0' && *str_a == *str_b)
	{
		str_a++;
		str_b++;
	}
		if (*str_a != *str_b)
		{
			return (*str_a - *str_b);
		}
	return (*str_a - *str_b);
}
