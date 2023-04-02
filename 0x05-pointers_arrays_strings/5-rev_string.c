#include "main.h"

/**
 * rev_string - reverse a string.
 * @s: the string to be reversed.
 *
 * Return: void.
 */


void rev_string(char *s)
{
	int i = 0, j;

	while (*(s + i) != '\0')
	{
		i++;
	}

	for (j = 0 ; j < i ; j++)
	{
		char tmp = *(s + j);

		*(s + j) = *(s + i - 1);

		*(s + i - 1) = tmp;

		i--;
	}
}
