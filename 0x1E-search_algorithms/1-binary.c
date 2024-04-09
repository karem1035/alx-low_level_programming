#include "search_algos.h"

/**
 * binary_search - search an array with a binary search.
 * @array: the array to be searched.
 * @size: the size of the array.
 * @value: the value to be searched.
 * Return: index of the value in the array or -1 if error.
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, i, mid;

	if (!array)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i < right)
				printf("%d, ", array[i]);
			else
				printf("%d", array[i]);
		}
		printf("\n");

		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
