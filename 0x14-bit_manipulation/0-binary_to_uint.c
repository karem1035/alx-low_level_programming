#include "main.h"
/**
 * binary_to_uint - converts a binary string to int.
 * @b: the address of the binary string.
 * Return: the integer value or 0 if it is incorrect.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, i = 0;

	if (*b == NULL)
	{
		return (0);
	}
	while (b[i])
	{
		if (b[i] > '1' || b[i] < '0')
		{
			return (0);
		}
		n = n * 2 + (b[i] - '0');
		i++;
	}
	return (n);
}
