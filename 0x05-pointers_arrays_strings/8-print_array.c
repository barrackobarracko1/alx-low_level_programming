#include "main.h"

/**
 * print_array - a function which prints n elements of an array
 * @a: array name
 * @n: number of elements of the array to be printed
 * Return: a and n inputs
 */

void print_array(int *a, int n)
{
	int q;

	for (q = 0; q < (n - 1) ; q++)
	{
	printf("%d, ", a[q]);
	}
	if (q == (n - 1))
	{
	printf("%d", a[n - 1]);
	}
	printf("\n");
}
