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
	int i = 0;

	while (str[i])
	{
		i++;
	}


	for (i /= 2 ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
