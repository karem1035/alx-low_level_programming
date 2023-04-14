#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid - frees a memory location of a 2d grid.
 * @grid: the array.
 * @height: the hight of the grid.
 *
 * Return: nothing.
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		free(grid);
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid[i]);
}
