#include "main.h"

/**
 * *leet - encodes a string into 1337.
 * @*s: address of array of chars.
 *
 * Return: char.
 */

char *leet(char *s)
{
	int i, j;

	char lower[] = "aeotl";
	char upper[] = "AEOTL";
	char num[] = "43071";


	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; i < 5; i++)
		{
			if (lower[i] == s[j] || upper[i] == s[j])
				s[j] = num[i];
		}
	}
	return (s);
}
