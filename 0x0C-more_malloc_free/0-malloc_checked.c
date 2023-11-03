#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocate memory using malloc
 * @b: input an int
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
	exit(98);
	}
	return (ptr);
}
