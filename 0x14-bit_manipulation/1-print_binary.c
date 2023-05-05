#include "main.h"
/**
 * print_binary - prints a int into binary.
 * @n: the int value.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	if (n & 1)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
}
