#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int l, b, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	for (l = 0; name[l]; l++)
		;
	l++;
	dog->name = malloc(l * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < l; i++)
	{
		dog->name[i] = name[i];
	}
	dog->age = age;
	for (b = 0; owner[b]; b++)
		;
	b++;
	dog->owner = malloc(b * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < b; i++)
		dog->owner[i] = owner[i];
	return (dog);
	printf("\n");
}
