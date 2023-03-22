#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints to 98.
 * @n: takes paramter n
 *
 * Description: prints numbers from n to 98.
 * Return: 0
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			if ( i == 98 )
			{
				printf("%d\n",i);
				break;
			}
			printf("%d, ", i);
		}
	}
	else if (n > 98)
	{
		int j;
		for (j = n ; j >= 98 ; j--)
		{
			if (j == 98)
			{
				printf("%d\n", j);
				break;
			}
			printf("%d, ", j);
		}
	}
	else
	{
		printf("%d\n", n);
	}
}
