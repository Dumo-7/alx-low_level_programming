#include "main.h"

/**
 * _isalpha - checks for alphabet characters
 * @c: character to be checked
 *
 * Return: 1 if c is lowercase or uppercase, otherwise 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'Z' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
