#include <stdio.h>

/**
 * main - prints the alphabets.
 * @void: takes no parameter.
 *
 * Description: printing the aschii values as chars
 * Return: zero
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');
	return (0);
}
