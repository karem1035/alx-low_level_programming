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
	for (int i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return(0);
}
