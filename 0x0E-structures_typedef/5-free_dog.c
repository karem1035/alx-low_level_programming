#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated.
 * @d: the address of the struct variable to be freed.
 *
 * Return: nothing.
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
		{
			free(d->name);
		}
		if (d->owner)
		{
			free(d->owner);
		}
		free(d);
	}
}
