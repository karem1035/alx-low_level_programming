#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialize a variable of type dog
 * @d: address of the variable.
 * @name: value of member name.
 * @age: value of member age.
 * @owner: value of member owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	
	if (d == NULL)
	{
		return (NULL);
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
