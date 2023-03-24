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

	for (i = 1 ; i < 101 ; i++)
	{
		if ((i % 3 == 0) && (i % 5 != 0))
		{
			printf("Fizz ");
		}
		else if ((i % 5 == 0) && (i % 3 != 0))
		{
			printf("Buzz ");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}

	printf("\n");

	return (0);
}
