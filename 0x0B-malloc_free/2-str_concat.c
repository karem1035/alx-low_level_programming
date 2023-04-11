#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concats two strings.
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: c2s the resuls.
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, l;
	char *c2s;

	if (s1)
		while (*(s1 + i) != '\0')
		{
			i++;
		}
	else
		s1 = "";

	if (s2)
		while (*(s2 + j) != '\0')
		{
			j++;
		}
	else
		s2 = "";
	c2s = malloc(sizeof(char) * (i + j + 1));

	if (c2s == NULL)
	{
		return (NULL);
	}

	for (l = 0; l < (i + j); l++)
	{
		if (l < i)
			c2s[l] = s1[l];
		else
			c2s[l] = s2[l - i];
	}

	c2s[l] = '\0';
	return (c2s);
}
