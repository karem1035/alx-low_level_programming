#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *s1, char *s2);




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
	int lname = _strlen(name);
	int lowner = _strlen(owner);
	char *cowner = malloc(sizeof(char) * (lowner + 1));
	char *cname = malloc(sizeof(char) * (lname + 1));
	dog_t *n_dog = malloc(sizeof(dog_t));

	_strcpy(cname, name);
	_strcpy(cowner, owner);

	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	if (cname == NULL)
	{
		free(cname);
		return (NULL);
	}
	if (cowner == NULL)
	{
		free(cowner);
		return (NULL);
	}


	n_dog->name = cname;
	n_dog->age = age;
	n_dog->owner = cowner;

	return (n_dog);
}

/**
 * _strlen - returns the length of a string.
 * @s: the address of the string.
 *
 * Return: int n, the length.
 */

int _strlen(char *s)
{
	int n = 0;

	while (*(s + n))
	{
		n++;
	}

	return (n);
}

/**
 * _strcpy - copies to strengs
 * @s1: string 1.
 * @s2: string 2.
 *
 * Return: address of the resulted string.
 */

char *_strcpy(char *s1, char *s2)
{
	int i;

	for (i = 0; s2[i]; i++)
	{
		s1[i] = s2[i];
	}
	s1[i] = '\0';

	return (s1);
}
