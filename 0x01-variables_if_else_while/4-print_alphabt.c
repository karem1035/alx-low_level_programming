#include <stdio.h>

/**
 * main - prints lowercase alphabets characters.
 * @void: takes no parameter.
 *
 * Description: printing the alphabets from a to z,
 * but without letter e and q.
 * Return: zero always.
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
	}
	putchar('\n');

	return (0);
}
