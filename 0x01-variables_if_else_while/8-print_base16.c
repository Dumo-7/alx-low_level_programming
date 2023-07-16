#include <stdlib.h>
#include <stdio.h>

/**
 *      main - prints all single digit numbers of base 16 starting from 0.
 *
 *      Return: 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0; n < 16; n++)
	putchar(48 + n);
	putchar('\n');
	return (0);
}
