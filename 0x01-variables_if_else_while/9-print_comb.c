#include <stdio.h>

/**
 * main - prints the decimal numbers.
 * @void: take no parameters.
 *
 * Description: prints the decimal values from 0 to 9,
 * with a , and a white space before them.
 * Return: 0 always.
 */

int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
		if (c != '9')
		{
			putchar (',');
			putchar (' ');
		}

	}
	putchar ('\n');
	return (0);
}
