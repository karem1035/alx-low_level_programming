#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory
 * @b: the size of malloc.
 *
 * Return: pointer to memory or 98 if error.`
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
