#include "main.h"

/**
 *
 *
 */

void more_numbers(void)
{
	int i, n = 0;

	for (i = 0 ; i < 10 ; i++)
	{
		while (n <= 14)
		{
			if (n > 9)
			{
				_putchar(1 + n % 10);
			}
			else
			{
				_putchar(n);
			}
		}
		_putchar('\n');
	}
}
