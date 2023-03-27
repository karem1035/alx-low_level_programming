#include "main.h"

/**
 * swap_int - swaps pointers values.
 * @a: first pointer.
 * @b: second pointer.
 *
 * Description: Swaps between 2 pointers values.
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int a2 = *a, b2 = *b;

	*a = b2;
	*b = a2;
}
