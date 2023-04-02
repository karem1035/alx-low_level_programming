#include "main.h"

/**
 *
 *
 */


char *_strcpy(char *dest, char *src)
{
	int i, n = 0;

	while (*(src + n) != '\0')
	{
		n++;
	}

	dest[n];

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}

	return dest;
}
