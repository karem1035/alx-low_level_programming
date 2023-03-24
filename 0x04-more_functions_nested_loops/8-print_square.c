#include "main.h"

/**
 * print_square - print a square with size.
 * @size: the size of the square.
 *
 * Description: printing a # times size square
 * Return: void.
 */

void print_square(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0 ; i < size ; i++)
		{
			int j;

			for (j = 0 ; j < size ; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
