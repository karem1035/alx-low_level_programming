#include "main.h"
/**
 * print_binary - print int number in binary value.
 * @n: the int;
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) ? '1' : '0');
}
