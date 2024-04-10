#include "search_algos.h"

/**
 * advanced_binary - returns the first occurence of value in array
 * using binary search algo adv
 * @array: the array we are looking at
 * @size: the size of the array
 * @value: the value we are looking at on the array.
 * Return: the index of the first occ of the value on the array or -1.
 */
int advanced_binary(int *array, size_t size, int value)
{
	int mid, l = 0, r = size - 1, i;

	if (!array)
		return (-1);

	while (l <= r)
	{
		mid = l + (r - l) / 2;

		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			if (i + 1 > r)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		if (array[mid] == value && (mid == 0 || array[mid - 1] < value))
			return (mid);

		else if (array[mid] < value)
			l = mid + 1;
		else
			r = mid - 1;
	}
	return (-1);
}
