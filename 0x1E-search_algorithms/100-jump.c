#include "search_algos.h"
/**
 * jump_search - search for a value using jump search.
 * @array: the array to search on.
 * @size: the size of the array.
 * @value: the value we look for.
 * Return: the index of the value or -1 if any error occured
 */
int jump_search(int *array, size_t size, int value)
{
	int step, end, i;

	if (!array || size == 0)
		return (-1);

	step = sqrt(size);

	for (i = 0; i < (int)size; i += step)
	{
		printf("Value checked array[%d] = [%d]\n", i, i);
		if (value >= array[i] && value <= array[i + step])
		{
			printf("Value checked array[%d] = [%d]\n", i + step, i + step);
			break;
		}
	}

	if (i > (int)size)
	{
		end = i;
		i = i - step;
	}
	else
		end = i + step;
	printf("Value found between indexes [%d] and [%d]]\n", i, end);

	for (; i <= end; i++)
	{
		if (i + 1 > (int)size)
			break;
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
