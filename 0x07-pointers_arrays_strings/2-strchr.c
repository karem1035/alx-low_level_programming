#include "main.h"
#include <stddef.h>

/**
 * _strchr - returns the address when certain char is located.
 * @s: the string to be checked.
 * @c: the letter we are searching for.
 *
 * Return: (NULL) if the letter hasn't located.
 * Return: The address where the letter is located.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}

		i++;
	}

	return (NULL);
}
