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
	size_t jumb, start = 0, end, i;

	if (!array)
		return (-1);

	jumb = sqrt(size);
	end = jumb;

	while (start <= size)
	{
		printf("Value checked array[%ld] = [%ld]\n", start, start);

		if (value >= array[start] && value <= array[end])
		{
			printf("Value found between indexes [%ld] and [%ld]\n", start, end);
			for (i = start; i <= end; i++)
			{
				printf("Value checked array[%ld] = [%ld]\n", i, i);
				if (array[i] == value)
					return (i);
			}
		}
		else if (end >= size)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", start, end);
			return (-1);
		}
		else
		{
			start = start + jumb;
			end = end + jumb;
		}
	}

	return (-1);
}
