#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - function that print a stuct dog
 * @d: pointer to structure
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)\n");
		}
	}
	printf("\n");
}
