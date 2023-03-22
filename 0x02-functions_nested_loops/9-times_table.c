#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times table
 * @void: takes no parameter.
 *
 * Description: prints from 0 to 81 times 9.
 * Return: 0.
 */


void times_table(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0 ; j < 10 ; j++)
		{
			int number = i * j;
			
			if (j == 0)
			{
				printf("%d", number);
			}
			else if (j == 9)
			{
				printf("%d\n", number);
			}
			else if (number < 10)
			{
				printf(",  %d", number);
			}
			else
			{
				printf(", %d", number);
			}
		}
	}
}
