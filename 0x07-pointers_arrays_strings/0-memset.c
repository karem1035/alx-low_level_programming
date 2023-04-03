#include "main.h"

/**
 * _memset - changes the value in an array.
 * @s: the memory address of the array.
 * @b: the char we are going to use to fill the array.
 * @n: the range of items we are going to replace in the array.
 *
 * Return: char.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
