#include "main.h"

/**
 * _abs - calculate the absolute value on an int
 * @n: the integer inputed.
 *
 * Description: return the the abolute value of an int.
 * Return: the aboslute value of n.
 */


int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
