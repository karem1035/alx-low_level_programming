#include "main.h"

/**
 * puts_half - prints half of string
 * @str: string input.
 *
 * Description: printing the second half of a string.
 * Return: void.
 */

void puts_half(char *str)
{
	int i = 0, l, j;

	while (str[i])
	{
		i++;
	}

	if (i % 2 != 0)
	{
	l = (i - 1) / 2;
	}
	else
	{
		l = i / 2;
	}

	for (j = 0 ; j < l ; j++)
	{
		_putchar(str[l + j]);
	}
	_putchar('\n');
}
