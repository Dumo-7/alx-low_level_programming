#include <stdlib.h>
#include <stdio.h>

/**
 *      main - Will print the alphabet in lower case in reverse.
 *
 *      Return: 0 (Success)
 */

int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
	putchar(l);
	putchar('\n');
	return (0);
}
