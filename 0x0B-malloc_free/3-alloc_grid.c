#include "main.h"
#include <stdlib.h>

/*
 * alloc_grid - makes a 2d array.
 * @width: array width.
 * @height: array height.
 *
 * Return: a pointer to the array.
 */

int **alloc_grid(int width, int height)
{
	int **tda, i, j;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	tda = malloc(sizeof(int *) * width);

	for (i = 0; i < width; i++)
	{
		tda[i] = malloc(sizeof(int) * height);
		for (j = 0; j < height; j++)
		{
			tda[i][j] = 0;
		}
	}

	return (tda);
}
