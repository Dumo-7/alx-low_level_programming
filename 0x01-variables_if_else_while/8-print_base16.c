#include <stdlib.h>
#include <stdio.h>

/**
 *      main -  prints all the numbers of base 16 in lowercase
 *
 *      Return: 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0; n < 16; n++)
	putchar(97 + n);
	putchar('\n');
	return (0);
}
