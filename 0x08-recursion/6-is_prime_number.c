#include "main.h"
int check_prime(int n, int i);

/**
 * is_prime_number - checks if a number is prime of not.
 * @n: the number to be checked.
 *
 * Return: 1 if it is prime, 0 if it is not.
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
	{
		return (0);
	}

	check_prime(n, i);
}

int check_prime(int n, int i)
{
	if (i < n)
	{
		if (n % i == 0)
		{
			return (0);
		}
		else
		{
			check_prime(n, i + 1);
		}
	}
	else
	{
		return (1);
	}
}
