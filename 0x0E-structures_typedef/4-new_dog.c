#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the new dog.
 * @age: age of the new dog.
 * @owner: name of the owner of the new dog.
 *
 * Return: address of the new created dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *n = name;
	char *o = owner;
	dog_t *my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
	{
		return (NULL);
	}

	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;

	return (my_dog);
}
