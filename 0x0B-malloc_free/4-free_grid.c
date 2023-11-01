#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  free_grid - frees a 2D array of integers
 * @grid: pointer to the 2D array
 * @height: height of the grid
 *
 * This function frees the memory allocated for a two-dimensional array of
 * integers with `height` rows. It first frees each row of the grid, and then
 * frees the memory allocated for the grid itself.
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int z;

	for (z = 0; z < height; z++)
	{
	free(grid[z]);
	}
	free(grid);
}
