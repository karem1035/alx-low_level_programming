#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string as parameter input.
 *
 * Description: takes string as parametre input and print it reversed
 * Return: void.
 */


void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}


	while (i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');

}
