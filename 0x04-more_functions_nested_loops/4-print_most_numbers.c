#include "main.h"

/**
 * print_most_numbers - print numbers from 9 to 0
 * @void: takes no parameters.
 *
 * Description: prints numbers form 9 to 0 but not 2 or 4.
 * Return: void.
 */

void print_most_numbers(void)
{
	char c;

	c = '0';

	while (c <= '9')
	{
		if (c != '2' && c != '4')
		{
			_putchar(c);
		}
		c++;
	}

	_putchar('\n');
}
