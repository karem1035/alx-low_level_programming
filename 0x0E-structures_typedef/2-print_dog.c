#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print struct dog values.
 * @d: address of the variables.
 *
 * Return: nothing.
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: ");

		if (d->name)
			printf("%s\n", d->name);
		else
			printf("(nil)\n");

		printf("Age: ");
		if (d->age)
			printf("%f\n", d->age);
		else
			printf("(nil)\n");
		printf("Owner: ");
		if (d->owner)
			printf("%s\n", d->owner);
		else
			printf("(nil)\n");
	}
}
