#include <stdio.h>

/**
 * main - prints alphabets reversed.
 * @void: no parameters inputed.
 *
 * Description: prints alphabets lowercase reversed.
 * Return: zero.
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n');
	return (0);
}
