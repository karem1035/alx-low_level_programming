#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	char *cname, *cowner;
	int lname, lowner;

	lname = strlen(name);
	lowner = strlen(owner);

	n_dog = malloc(sizeof(dog_t));
	cname = malloc(sizeof(char) * (lname + 1));
	cowner = malloc (sizeof(char) * (lowner + 1));


	if (n_dog == NULL)
	{
		return (NULL);
	}
	else if (cname == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	else if (cowner == NULL)
	{
		free(cname);
		free(n_dog);
		return (NULL);
	}

	strcpy(cname, name);
	strcpy(cowner, owner);

	n_dog->name = cname;
	n_dog->owner = cowner;
	n_dog->age = age;

	return (n_dog);
}
