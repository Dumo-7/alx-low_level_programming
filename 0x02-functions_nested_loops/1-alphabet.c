#include "main.h"

/**
 * print_alphabet - Print alphabet in lowercase
 *
 * Return: always (0)
 */

void print_alphabet(void)
{
	char l;
	char u;

	for (l = 'a'; l <= 'z'; l++)
	putchar(l);

	for (u = 'A'; u <= 'Z'; u++)
	putchar(u);
	putchar('\n');
	return (0);
}
