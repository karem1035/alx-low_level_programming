#include "main.h"

/**
 * create_array - creates an array of char.
 * @size: size of the array.
 * @c: the char.
 *
 * Return: a pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *i;
	unsigned int j;

	i = malloc(sizeof(c) * size);

	for (j = 0; j < size; j++)
	{
		i[j] = c;
	}

	return (i)
}
