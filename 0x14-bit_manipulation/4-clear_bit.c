#include "main.h"
/**
 * clear_bit - a function that clears bit a certain index.
 * @n: the integer.
 * @index: the index of the bit to be cleared.
 * Return: -1 if fails 1 if succeded
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
