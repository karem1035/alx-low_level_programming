#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Check the value of a last digit number.
 * @void: the function gets no parameter as input.
 *
 * Description: Print to the screen a string descripting
 * the last digit value of a randomly generated number.
 * Return: zero always.
 */

int main(void)
{
	int n, ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	ld = n % 10;
	if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	}
	else if (ld < 5 && ld != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, ld);
	}
	return (0);
}
