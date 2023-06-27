#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: the inputed string.
 * @accept: the accepted letters.
 *
 * Return: n > the length of the occurence.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	char *p;

	for (; *s ; s++, n++)
	{
		for (p = accept ; *p && *p != *s ; p++)
		{
			;
		}

		if (!*p)
		{
			break;
		}
	}

	return (n);
}
