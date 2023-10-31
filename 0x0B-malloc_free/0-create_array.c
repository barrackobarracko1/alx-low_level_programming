#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates array of size size and assign char c
 * @size: the size of array
 * @c: the char to assign
 * Description: create an array of size size and assign char c
 * Return: pointer to array, NUll if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr = NULL;
	unsigned int p;

	if (size == 0)
	return (NULL);

	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	return (NULL);
	for (p = 0; p < size; p++)
	arr[p] = c;
	return (arr);
}
