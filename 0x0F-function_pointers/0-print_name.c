#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - passes to fucntion pointer.
 * @name: pointer to string.
 * @f: function address.
 *
 * Return: void.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
