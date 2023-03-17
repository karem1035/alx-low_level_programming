#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - checks if a number is negative or positive or zero
 *
 * @void: takes no input
 *
 * Description: prints a message with the value of the number n.
 * Return: 0 always
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
