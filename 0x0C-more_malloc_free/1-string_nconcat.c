#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concates a string with the first bytes of another.
 * @s1: the first string.
 * @s2: the second string.
 * @n: number of bytes of the second string to be copyed.
 *
 * Return: pointer to the concatenated strings or NULL if failed.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, l = 0;
	char *result, *c;

	if (s1 == NULL)
	{
		s1 = "";
	}
	
	if (s2 == NULL)
	{
		s2 = "";
	}

	i = strlen(s1);
	j = strlen(s2);

	c = malloc(i + n);
	result = malloc(n);

	if (c == NULL || result == NULL)
	{
		return (NULL);
	}

	if (n < j)
	{
		while (l <= n)
		{
			*(result + l) = *(s2 + l);

			l++;
		}
	}
	else
	{
		strcpy(result, s2);
	}
	strcpy(c, s1);
	strcat(c, result);

	return (c);
}
