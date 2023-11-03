#include "main.h"
#include <stdlib.h>

/**
 * array_range - this function create an array of integers
 * @min: the minimum value
 * @max: value
 * Return: an int pointer to the allocated memory
 */

int *array_range(int min, int max)
{
	int x, c;
	int *d;

	if (min > max)
	return (NULL);
	c = max - min + 1;
	d = malloc(sizeof(int) * c);
	if (d == NULL)
	return (NULL);
	for (x = 0; x < c; x++)
	{
	d[x] = min;
	min++;
	}
	return (d);
}
