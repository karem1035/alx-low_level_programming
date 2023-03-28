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
	int i = 0, h;

	while (str[i])
	{
		i++;
	}

	if (i % 2 == 0)
	{
		h = i / 2;
	}
	else
	{
		h = (i + 1) / 2;
	}

	for (; str[h] != '\0' ; h++)
	{
		_putchar(str[h]);
	}
	_putchar('\n');
}
