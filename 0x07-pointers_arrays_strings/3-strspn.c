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
	unsigned int i, n = 0;

	while (*s != '\0')
	{
		for (i = 0 ; *(accept + i) >= '\0' ; i++)
		{
			if (*s == *(accept + i))
			{
				n++;
				break;
			}

			else if (*(accept + i) == '\0' && *s != *(accept + i))
			{
				return (n);
			}
		}
	}

	return (n);
}
