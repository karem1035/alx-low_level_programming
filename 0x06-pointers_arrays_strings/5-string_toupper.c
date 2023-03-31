#include "main.h"

/**
 * string_toupper - Change all letter from a string to uppercase
 * @s: string to change to uppercase
 *
 *Return: pointer to the string in uppercase format
 */

char *string_toupper(char *s)
{
	char *p = s;

	while (*p != '\0')
	{
		if (*p >= 97 && *p <= 122)
			*p = *p - 32;
		p++;
	}
	return (s);
}
