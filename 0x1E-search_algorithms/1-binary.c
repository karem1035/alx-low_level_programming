#include "search_algos.h"

void print_arry(int *array, size_t left, size_t right);

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size, mid;

	if (!array)
		return (-1);

	while (left <= right)
	{
		print_arry(array, left, right);

		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return mid;
		if (array[mid] < value)
			left = mid + 1;

		if (array[mid] > value)
			right = mid - 1;
	}
	return (-1);
}

/**
 * print_array - print a division of array
 * @left: the starting point to be printed
 * @right: the end point to print to
 */
void print_arry(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i < right; i++)
	{

		printf("%d", array[i]);
		if (i < right - 1)
			printf(", ");
	}
	printf("\n");
}