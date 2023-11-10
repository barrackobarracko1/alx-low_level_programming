#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator - function which prints each array element on newline
* @array: an array
* @size: the number of elements to print
* @action: The pointer to print in regular or hex
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int m;

	if (array == NULL || action == NULL)
	return;

	for (m = 0; m < size; m++)
	{
	action(array[m]);
	}
}
