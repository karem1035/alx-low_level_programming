#include "main.h"

/**
 * _memcpy - copiyes memory area.
 * @dest: the resulting array.
 * @src: the source array.
 * @n: the range of copying.
 *
 * Return: the address of resulting array.
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
