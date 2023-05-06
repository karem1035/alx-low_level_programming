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
	unsigned int count = 0, r = n ^ m;

	while (r > 0)
	{
		count += (r & 1);
		r >>= 1;
	}
	return (count);
}
