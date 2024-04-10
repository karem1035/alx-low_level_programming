#include "search_algos.h"
int advanced_binary_recursive(int *array, int l, int r, int value);

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
	if (!array)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}

/**
 * advanced_binary_recursive - using recusive on binary search.
 * @array: the arrray to lookup.
 * @l: the left index of the search area on the array.
 * @r: the right index of the search area on the array.
 * @value: the value we are looking at.
 * Return: the index of the value on the array or -1.
 */
int advanced_binary_recursive(int *array, int l, int r, int value)
{
	int mid, i;

	if (r < l)
		return (-1);
	mid = l + (r - l) / 2;
	printf("Searching in array: ");
	for (i = l; i < r; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	if (array[mid] == value && (mid == 0 || array[mid - 1] < value))
		return (mid);
	else if (array[mid] < value)
		return (advanced_binary_recursive(array, mid + 1, r, value));
	else
		return (advanced_binary_recursive(array, l, mid - 1, value));
}
