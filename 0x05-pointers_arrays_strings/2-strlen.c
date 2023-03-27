#include "main.h"

/**
 * _strlen - calulates the length of string.
 * @s: string inut.
 *
 * Description: takes string as parameter input,
 * loops into it to calculate its length.
 * Return: i - integer with the length value.
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
