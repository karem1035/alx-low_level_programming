#include "main.h"

/**
 * print_last_digit - print the last digit.
 * @x: the int inputed
 *
 * Description: calculate and print the last digit number of int.
 * Return: 0 always.
 */

int print_last_digit(int x)
{
	int last_digit;

	if (x < 0)
	{
		last_digit = x % 10 * -1;
	}
	else
	{
		last_digit = x % 10;
	}


	return (last_digit);
}
