#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - start point/
 * @void: no parameter.
 *
 * Description: printing the lowercase alphabets 10 times.
 * Retrun: 0.
 */

	
void print_alphabet_x10(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		char c = 'a';

		while (c <= 'z')
		{
			printf("%c",c);
			c++;
		}
		printf("\n");
	}
}
