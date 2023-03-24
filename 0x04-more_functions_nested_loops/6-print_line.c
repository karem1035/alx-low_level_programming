#include "main.h"

/**
 * print_line - prints _
 * @n: the length of the line
 *
 * Description: prints a line of _
 * Return: 0.
*/

void print_line(int n)
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
		_putchar('_');
	}
		_putchar('\n');
	}
}
