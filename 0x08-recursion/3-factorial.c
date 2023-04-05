#include "main.h"

/**
 * factorial - returns a factorial of int.
 * @n: the parameter number.
 *
 * Return: the resulting number.
 */


int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}

	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
}
