#include "main.h"
int find_square(int n, int root);

/**
 * _sqrt_recursion - returns the natural root of n.
 * @n: the number.
 *
 * Return: the root number.
 */

int _sqrt_recursion(int n)
{
	int i = 1;

	if (n <= 0)
	{
		return (-1);
	}


	return (find_square(n, i));
}

/**
 * find_square - calculate the square of a number.
 * @n: the number.
 * @root: the root of that number.
 *
 * Return: root, the result of the recursion.
 */

int find_square(int n, int root)
{
	if (root * root <= n)
	{
		if (root * root == n)
		{
			return (root);
		}
		else
		{
			root++;
			return (find_square(n, root));
		}
	}
	return (-1);
}
