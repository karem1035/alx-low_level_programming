#include "main.h"

/**
 * _pow_recursion - prints x power to y.
 * @x: the number.
 * @y: the power.
 *
 * Return: the result of x power to y.
 */


int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * (_pow_recursion(x, y - 1)));
	}
}
