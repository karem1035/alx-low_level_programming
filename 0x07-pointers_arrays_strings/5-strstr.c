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
	int i, j;

	for (i = 0 ; haystack[i] ; i++)
	{
		j = 0;

		if (haystack[i] == needle[j])
		{
			j++;

			while (haystack[i + j] == needle[j])
			{
				j++;

				if (!needle[j + 1])
				{
					return (&haystack[i]);
				}
			}
		}
	}

	return (NULL);
}
