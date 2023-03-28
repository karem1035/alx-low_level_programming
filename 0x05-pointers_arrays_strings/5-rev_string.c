#include "main.h"

void rev_string(char *s)
{
	int i;

	while(s[i])
	{
		i++;
	}

	char *r;

	int j = 0;

	while(i--)
	{
		r[j] = s[i];

		j++;
	}


	printf("%s\n", r);
}

/*
 * get the length of char *s
 * create new array of chars r
 * loop to char s reversed and store the values to r
 * change the address of s to the new char array r
 *
 */
