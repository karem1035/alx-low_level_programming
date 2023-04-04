#include "main.h"
#include <stddef.h>

/**
 * _strstr - brings the first occurence of a word in a string.
 * @haystack: the string to be searched.
 * @needle: the word to be looked for.
 *
 * Return: Locationo of the first occurence, or NULL otherwise.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while (*(haystack + i))
	{
		j = 0;

		if (*(haystack + i) == needle[j])
		{
			while (*(haystack + i) == needle[j])
			{
				i++;
				j++;

				if (needle[j] == '\0')
				{
					return (haystack + i - j);
				}
			}

		}

		i++;
	}

	return (NULL);
}
