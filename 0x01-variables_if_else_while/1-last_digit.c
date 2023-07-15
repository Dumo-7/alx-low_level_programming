#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *	main - indicate if value assigned to n is positive or negative.
 *
 *	Return: 0 (Success)
 */

int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = abs(n) % 10;
	if (abs(n) % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, abs(n) % 10);
	}
	if (abs(n) % 10 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, abs(n) % 10);
	}
	if (l < 6 && l > 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	return (0);
}
