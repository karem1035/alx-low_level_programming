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

	return (check_prime(n, i));
}

/**
 * check_prime - checks if a number is prime or not.
 * @n: the number to be checked.
 * @i: the number to be raised.
 *
 * Return: 0 if it is not prime. 1 if it is prime.
 */


int check_prime(int n, int i)
{
	if (i < n && n % i == 0)
	{
		return (0);
	}
	else if (n == i)
	{
		return (1);
	}

	return (check_prime(n, i + 1));
}
