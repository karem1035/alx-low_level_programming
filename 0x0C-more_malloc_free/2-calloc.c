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
	unsigned int index, *mem;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	mem = malloc(nmemb * size);

	if (mem == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < (nmemb * size); index++)
	{
		mem[index] = '\0';
	}

	return (mem);
}
