#include "main.h"

/**
 * print_diagonal - prints diagonal line.
 * @n: number of lines to be printed.
 *
 * Description: takes n as input prints diagonal lines of it.
 * Return: Void.
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0 ; i < n ; i++)
		{
			int j;

			for (j = 0 ; j < i ; j++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}

	}
}
