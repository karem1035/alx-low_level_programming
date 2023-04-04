#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - return the first occurence of a letter.
 * @s: the string to be searched.
 * @accept: the string contains letters.
 *
 * Return: s or Null where is the address of the first occurence of the letter.
 */


char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s)
	{
		for (p = accept ; *p ; p++)
		{
			if (*p == *s)
			{
				return (s);
			}
		}

		s++;
	}

	return (NULL);
}
