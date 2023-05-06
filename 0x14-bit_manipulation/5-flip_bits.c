#include "main.h"
/**
 * flip_bits - a function that returns the number of bits,
 * you would need to flip to get from one number to another.
 * @n: the first number.
 * @m: the second number.
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int r = n ^ m, count = 0;

	while (r > 0)
	{
		count += (xor & 1);
		r >>= 1;
	}

	return (count);
}
