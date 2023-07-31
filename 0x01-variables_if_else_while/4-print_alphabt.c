#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *	main - Will print the alphabet in lower case excluding e and q.
 *
 *	Return: 0 (Success)
 */

int main(void)
{
	char al;
	char e;
	char q;

	e = 'e';
	q = 'q';

	for (al = 'a'; al <= 'z'; al++)
	if (al !=  e && al != q)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
