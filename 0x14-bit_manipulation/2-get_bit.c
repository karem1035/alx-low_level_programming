#include "main.h"
/**
 * get_bit - get the bit value at certain index.
 * @n: the int.
 * @index: the index of the bit.
 * Return: the bit value 0/1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index > (sizeof(unsigned int) * 8))
		return (-1);
	if (n & mask)
		return (1);
	return (0);
}
