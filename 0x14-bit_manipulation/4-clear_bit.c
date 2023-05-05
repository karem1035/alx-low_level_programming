#include "main.h"
/**
 * clear_bit - clears a bit at certain index.
 * @n: the numver.
 * @index: the index of the bit to be cleared.
 * Return: -1 if it fails/ 1 if succeded
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}
