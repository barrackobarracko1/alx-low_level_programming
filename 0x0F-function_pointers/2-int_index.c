#include "function_pointers.h"

/**
* int_index - function which return index place if comparison = true, else -1
* @array: an array
* @size: the size of elements in the array
* @cmp: the pointer to function of one of the 3 in main
* Return: 0 when successful
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int t;

	if (array == NULL || size <= 0 || cmp == NULL)
	return (-1);

	for (t = 0; t < size; t++)
	{
	if (cmp(array[t]))
	return (t);
	}
	return (-1);
}
