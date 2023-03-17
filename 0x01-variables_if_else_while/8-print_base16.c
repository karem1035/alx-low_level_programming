#include <stdio.h>

/**
 * main - returnning the 16 base numbers.
 * @void: no parameter inputed.
 *
 * Description: A funtion that prints a numbers of base 16.
 * Return: zero always.
 */

int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
