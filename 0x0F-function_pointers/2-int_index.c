#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - checks if a number is existed in an array.
 * @array: the array of ints.
 * @size: size of the array.
 * @cmp: the function address.
 *
 * Return: int the index of the number in the array.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !size || !cmp || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
