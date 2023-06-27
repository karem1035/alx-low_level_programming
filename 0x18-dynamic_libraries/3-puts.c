#include "main.h"

/**
 * _puts - adds \n to the end of string.
 * @str: string inputed as parameter.
 *
 * Description: adds \n to the end of a string using _putchar.
 * Return: Void.
 */


void _puts(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
