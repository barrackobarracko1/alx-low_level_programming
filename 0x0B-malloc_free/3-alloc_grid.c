#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a two-dimensional array of integers
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * This function allocates memory for a two-dimensional array of integers with
 * `width` columns and `height` rows. Each element of the array is initialized
 * to 0. If either `width` or `height` is 0 or negative, the function returns
 * NULL. If memory allocation fails, it also returns NULL.
 *
 * Return: a pointer to the newly created 2D array, or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **asb;
	int p, k;

	if (width <= 0 || height <= 0)
	return (NULL);
	asb = malloc(sizeof(int *) * height);
	if (asb == NULL)
	return (NULL);
	for (p = 0; p < height; p++)
	{
	asb[p] = malloc(sizeof(int) * width);
	if (asb[p] == NULL)
	{
	for (; p >= 0; p--)
	free(asb[p]);
	free(asb);
	return (NULL);
	}
	}
	for (p = 0; p < height; p++)
	{
	for (k = 0; k < width; k++)
	asb[p][k] = 0;
	}
	return (asb);
}
