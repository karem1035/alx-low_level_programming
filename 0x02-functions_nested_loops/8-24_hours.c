#include <stdio.h>

/**
 * jack_bauer - prints the time in scope
 * @void: takes no parameter.
 *
 * Description: prints the time from 00:00 to 24:00
 * Return: 0.
 */

void jack_bauer(void)
{
	int hour;

	for (hour = 0 ; hour < 24 ; hour++)
	{

		int min;

		for (min = 0 ; min < 60 ; min++)
		{
			if (hour < 10)
			{
				printf("0%d:", hour);
			}
			else
			{
				printf("%d:", hour);
			}

			if (min < 10)
			{
				printf("0%d\n", min);
			}
			else
			{
				printf("%d\n", min);
			}
		}
	}
}
