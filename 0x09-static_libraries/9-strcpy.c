#include "main.h"

/**
 * _strcpy - copying a string.
 * @dest: the copying resut.
 * @src: the copying sourcse.
 *
 * Return: dest, the result.
 */


char *_strcpy(char *dest, char *src)
{
	int i, n = 0;

	while (*(src + n) != '\0')
	{
		n++;
	}


	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}

	dest[n] = '\0';

	return (dest);
}
