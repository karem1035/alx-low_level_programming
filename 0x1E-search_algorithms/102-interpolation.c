#include "search_algos.h"
/**
 * interpolation_search - Search for item in array with interpolation_search.
 * @array: the array to be searche.
 * @size: the size of the array.
 * @value: the value we are looking for.
 * Return: the pos or -1 in case of erro
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos;
	int low, high;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		double range_ratio = (double)(high - low) / (array[high] - array[low]);
		int value_difference = value - array[low];

		pos = low + (range_ratio * value_difference);

		if (pos > size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		if (array[pos] > value)

			high = pos - 1;
	}
	return (-1);
}
