#include "main.h"

/**
 *
 *
 */

void more_numbers(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		int n = 0;

		while (n <= 14)
		{
			_putchar(n);

			if (n > 9)
			{
				_putchar(n % 10);
			}

			n++;
		}

	_putchar('\n');
	}
}
