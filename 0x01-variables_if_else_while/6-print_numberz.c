#include <stdio.h>

/**
 * main - prints number 1:9.
 * @void: no parameters.
 *
 * Description: for loop prints 0 to 9.
 * Return: zero always.
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
