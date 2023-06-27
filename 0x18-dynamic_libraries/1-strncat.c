#include <stdio.h>

/**
 * _strncat - strncat with limitation to (n).
 * @dest: first string.
 * @src: second string.
 * @n: src number of chars.
 *
 * Return: concatenated string with base n.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *tmp = dest;
	int i;

	while (*tmp != '\0')
	{
		tmp++;
	}


	for (i = 0 ; i < n && *src != '\0' ; i++)
	{
		*tmp++ = *src++;
	}


	tmp = '\0';

	return (dest);
}
