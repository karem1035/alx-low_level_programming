#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies a string.
 * @str: the string to copied
 *
 * Return: the address of the new string.
 */

char *_strdup(char *str)
{
	char *nstr;
	int i = 0, j;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*(str + i))
	{
		i++;
	}

	nstr = malloc(sizeof(char) * i + 1);

	if (nstr == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
		nstr[j] = str[j];

	nstr[j] = '\0';

	return (nstr);

}
