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
		int number = i * 9;

		if (number == 81)
		{
			printf("%d", number);
		}
		else if (number < 9)
		{
			printf("%d,  ", number);
		}
		else
		{
			printf("%d, ", number);
		}
	}
}
