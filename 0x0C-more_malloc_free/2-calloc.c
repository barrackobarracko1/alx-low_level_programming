#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function which allocates memory for an array
 * @nmemb: number of block memory
 * @size: the size of the element (int)
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
	size_t g;

	if (nmemb == 0 || size == 0)
	return (NULL);
	m = malloc(nmemb * size);
	if (m == NULL)
	return (NULL);
	for (g = 0; g < (nmemb * size); g++)
	m[g] = 0;
	return (m);
}
