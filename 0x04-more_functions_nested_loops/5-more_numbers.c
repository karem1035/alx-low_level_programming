#include "main.h"

/**
 * more_numbers - start point.
 * @void: no parameter.
 *
 * Description: prints from 1 to 14 using _putchar
 * Return: void.
 */

void more_numbers(void)
{
	int i, n;

	for (i = 0 ; i < 10 ; i++)
	{
		int j;

		for (j = 0 ; j <= 14 ; j++)
		{
			n =  j;

			if (j > 9)
			{
				_putchar(49);
				n = j % 10;
			}
			_putchar(n + 48);
		}
	_putchar('\n');
	}
}
