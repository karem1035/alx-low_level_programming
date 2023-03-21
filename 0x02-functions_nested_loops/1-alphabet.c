#include "main.h"

/**
 * main - printing the alphabets.
 * @void: takes no parametrs
 *
 * Description: Printing lowe case alphabets using a function from main.h
 * Return: 0.
 */
int main(void)
{
	int i;

	for (i = 97 ; i < 122 ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
