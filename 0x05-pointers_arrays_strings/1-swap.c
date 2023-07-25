#include "main.h"

/**
 * swap_int - swaps values of int a and b
 * @a: first integer
 * @b: second integer
 *
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *b;

	*b = *a;
	*a = n;

}
