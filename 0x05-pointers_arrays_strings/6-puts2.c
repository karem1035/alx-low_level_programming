#include "main.h"
#include "main.h"

/**
 * puts2 - prints every other value of stirng
 * @str: the string paramter.
 *
 * Description: prints every second value of string.
 * Return: void.
 */

void puts2(char *str)
{
	int i = 0, j;

	while (str[i])
	{
		i++;
	}


	for (j = 0 ; j < i ; j++)
	{
		if (j % 2 == 0 || i == 0)
		{
			_putchar(str[j]);
		}
	}

	_putchar('\n');
}
