#include "main.h"

/**
 * main - start point
 * @void: no parameter.
 *
 * Description: prints form 1 to 100 but replcing.
 * 3* for Fizz 4* for Buzz.
 * Return: void.
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 100 ; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 4 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}

	_putchar('\n');
}
