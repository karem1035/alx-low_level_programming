#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints all the numbers on the list
 * @separator: sparator string.
 * @n: count of arguments.
 *
 * Return: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
