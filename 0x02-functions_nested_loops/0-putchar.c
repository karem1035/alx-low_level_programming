#include "main.h"

/**
 * main - prints a text.
 * @void: no parameters.
 *
 * Description: Prints a the text using a function from the header file.
 * Return: 0.
 */


int main(void)
{
	char text[] = "_putchar\n";

	int i;

	for (i = 0 ; text[i] != '\0' ; i++)
	{
		_putchar(text[i]);
	}
	return (0);
}
