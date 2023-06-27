#include <stdio.h>
#include "main.h"

/**
 * *_strcat - cincatenates two strigs.
 * @dest: first string.
 * @src: second string.
 *
 * Return: *char/string.
 */



char *_strcat(char *dest, char *src)
{
	char *tmp = dest;

	while (*tmp != '\0')
	{
		tmp++;
	}

	while (*src != '\0')
	{
		*tmp++ = *src++;
	}

	*tmp = '\0';

	return (dest);
}
