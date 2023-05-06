#include "main.h"
/**
 * set_bit - sets a bit to 1 at certain index.
 * @n: the number.
 * @index: the index of the bit.
 * Return: -1 if it fails/ 1 if succeded.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned int) * 8)
	{
		return (-1);
	}
	*n |= 1 << index;
	return (1);
}
