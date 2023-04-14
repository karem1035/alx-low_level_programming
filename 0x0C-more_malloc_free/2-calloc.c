#include "main.h"
#include <stdlib.h>

/**
 * _calloc - return a pointer to an array
 * @nmemb: number of array's elements.
 * @size: size of the data type.
 *
 * Return: mem (array address), or NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		p[i] = 0;
	}

	return (p);
}
