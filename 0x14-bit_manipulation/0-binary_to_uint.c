#include "main.h"
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: the string address.
 * Return: the value of the binary in int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int i;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i]; i++)
	{
		if (b[i] < 48 || b[i] > 49)
		{
			return (0);
		}

		value = 2 * value + (b[i] - '0');

	}
	return (value);
}
