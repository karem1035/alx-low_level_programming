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
	unsigned int l = n, s;
	char *c;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	s = 0;

	while (s1[s])
	{
		s++;
		l++;
	}

	c = malloc(sizeof(char) * (l + 1));

	if (c == NULL)
	{
		return (NULL);
	}

	l = 0;

	for (s = 0; s1[s]; s++)
	{
		c[l++] = s1[s];
	}
	for (s = 0; s2[s] && s < n; s++)
	{
		c[l++] = s2[s];
	}
	c[l] = '\0';
	return (c);
}
