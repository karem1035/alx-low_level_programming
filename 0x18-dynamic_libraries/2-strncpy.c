#include "main.h"

/**
 * _strncpy - copy n bytes to another string
 * @dest: array where will be copied
 * @src: array where will be taken the bytes
 * @n: numbers of bytes to copy
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0, i = 0;

	for (i = 0; i  < n && src[i]; i++)
	{
		dest[i] = src[i];
	}

	for (j = i; j < n; j++)
	{
		dest[j] = '\0';
	}

	return (dest);
}
