#include "main.h"
/**
 * get_bit - get the bit in certain index.
 * @n: the number.
 * @index: the index of the bit we want.
 * Return: -1 if it fails or the bit value.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
