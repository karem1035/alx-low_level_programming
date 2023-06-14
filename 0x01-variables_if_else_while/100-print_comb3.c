#include <stdio.h>
/**
 * main - prints combinations of 0 and 1.
 * Return: always 0.
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + 48);
			putchar(j + 48);
			if (i != 8)
			{
				putchar(',');
				putchar(' ');
			}
			else
			putchar('\n');
		}
	}
	return (0);
}
