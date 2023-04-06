#include "main.h"

/**
 * is_prime_number - checks if a number is prime of not.
 * @n: the number to be checked.
 *
 * Return: 1 if it is prime, 0 if it is not.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	int i;

	for (i = 2 ; i < n ; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}

	return (0);
}
