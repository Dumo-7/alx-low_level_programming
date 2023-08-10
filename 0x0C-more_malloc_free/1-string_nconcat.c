#include "main.h"
#include <stdlib.h>

/**
 *  string_nconcat - concatenates two strings.
 *  @s1: string
 *  @s2: string
 *  @n: index
 *  Return: newly allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int f1, f2, i;

	f1 = 0;
	f2 = 0;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";
	while (s1[f1] != '\0')
	{
		f1++;
	}
	while (s2[f2] != '\0')
	{
		f2++;
	}
	if (n > f2)
	n = f2;
	a = malloc((f1 + n + 1) * sizeof(char));

	if (a == NULL)
	return (0);
	for (i = 0; i < f1; i++)
	{
		a[i] = s1[i];
	}
	for (; i < (f1 + n); i++)
	{
		a[i] = s2[i - f1];
	}
	a[i] = '\0';
	return (a);
	_putchar('\n');
}
