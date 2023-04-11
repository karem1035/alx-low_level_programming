#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
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
		if (tda[i] == NULL)
		{
			for (; i >= 0 ; i--)
			{
				free(tda[i]);
			}
			free(tda);
			return (NULL);
		}
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			tda[i][j] = 0;
		}
	}

	return (tda);
}
