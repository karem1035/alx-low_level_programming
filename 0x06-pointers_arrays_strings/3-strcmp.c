#include "main.h"

/**
 *_strcmp - Compare two string
 * @s1: First string
 * @s2: Second String
 *
 * Return: Integer number.
 */

int _strcmp(char *s1, char *s2)
{
	char *r = s1;
	char *l = s2;
	int res = 0;

	while (*r || *l)
	{
		res = *r - *l;
		if (res != 0)
			return (res);
		r++;
		l++;
	}
	return (res);
}
