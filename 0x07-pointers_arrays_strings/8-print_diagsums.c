#include "main.h"

/**
 * print_diagsums - sum the two diagonals of a matrix of integers.
 * @a: the array of input.
 * @size: the size of the snd array.
 *
 * Reaturn: void.
 */


void print_diagsums(int *a, int size)
{
	int i, j, n = 0;

	for (i = 0 ; i < size ; i++)
	{
		for (j = 0 ; j < size ; j++)
		{
			if (i == j)
			{
				n += *(a + (i * size) + j);
			}
		}
	}

	printf("%d, ", n);

	n = 0;

	for (i = 0 ; i < size ; i++)
	{
		for (j = 0 ; j < size ; j++)
		{
			if (i + j == size - 1)
			{

				n += *(a + (i * size) + j);
			}
		}
	}

	printf("%d\n", n);
}
