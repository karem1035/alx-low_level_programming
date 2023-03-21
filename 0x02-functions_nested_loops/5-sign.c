#include "main.h"

/**
 * print_sign - prints the sight of the integer
 * @n: the main number
 *
 * Description: Takes n as input, checks it value, and prints its sign.
 * Return: + if n > 0, - if n < 0, 0 if n = 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
