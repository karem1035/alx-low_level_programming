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
	unsigned int i, j, l;
	char *c;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	l = 0;
	while (s1[l])
	{
		l++;
	}
	c = malloc(l + n + 1);
	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0, j = 0; i < (l + n + 1); i++)
	{
		if (i <  l)
		{
			c[i] = s1[i];
		}
		else
		{
			c[i] = s2[j++];
		}
	}
	c[i] = '\0';
	return (c);
}
