#include "search_algos.h"
int binarySearch(int *array, int l, int r, int value);

/**
 * exponential_search - seaching in array using exponential search alg
 * @array: the array to search on.
 * @size: the size of the array.
 * @value: the value of the item we are looking for.
 * Return: the index of the element.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, l, r;

	if (!array)
		return (-1);

	if (array[0] == value)
		return (0);

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i = i * 2;
	}

	l = i / 2;
	r = i < size - 1 ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", l, r);
	return (binarySearch(array, l, r, value));
}
/**
 * binarySearch - searching using binary seach recusively
 * @array: the array we search on.
 * @l: the left of scope.
 * @r: the right of the scope.
 * @value: the value of the element we are looking for
 * Return: the index of the element or -1 in case of errors
 */
int binarySearch(int *array, int l, int r, int value)
{
	int mid, i;

	if (l > r)
		return (-1);

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		if (i + 1 > r)
		{
			printf("%d\n", array[i]);
			break;
		}
		printf("%d, ", array[i]);
	}
	mid = l + (r - l) / 2;
	if (array[mid] == value)
		return (mid);
	else if (array[mid] < value)
		return (binarySearch(array, mid + 1, r, value));
	else
		return (binarySearch(array, l, mid - 1, value));
}
