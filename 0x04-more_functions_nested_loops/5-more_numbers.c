#include "main.h"

/**
 * more_numbers - prints numbers 0-10 14x
 *
 */

void more_numbers(void)
{
	int l;
	int a;

	for (a = 0; a < 10; a++)
	{
		for (l = 0; l <= 14; l++)
		{
			if (l > 9)
			{
				_putchar((l / 10) + '0');
			}
			_putchar((l % 10) + '0');
		}
			_putchar('\n');
	}
}
