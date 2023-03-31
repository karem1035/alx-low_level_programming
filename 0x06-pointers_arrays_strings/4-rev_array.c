#include "main.h"

/**
 * reverse_array - Reverse an array of integers.
 * @a: array of integers
 * @n: number of element integer array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, j, c = 0;
	int b[100];

	for (i = 0; i < n; i++)
		b[i] = *(a + i);
	for (j = i - 1; j >= 0; j--)
	{
		a[c] = b[j];
		c++;
	}
}
