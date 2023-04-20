#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - iterate through array with function call.
 * @array: array of integers.
 * @size: size of the array.
 * @action: the function address.
 *
 * Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !size || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
