#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10x in lowercase
 *
 */

void print_alphabet_x10(void)
{
	char l;
	int a;

	for (a = 1; a <= 10; a++)
	{
		for (l = 'a'; l <= 'z'; l++)
		_putchar(l);
		_putchar('\n');
	}
}
