#include"main.h"

/**
 * get_bit - program that returns the value of bit at a given index.
 * @n: the number to check bits in
 * @index: the index at which to check bit
 * Return: the value of bit, or -1 if it fails
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	return (-1);
	div = 1 << index;
	check = n & div;
	if (check == div)
	return (1);
	return (0);
}
