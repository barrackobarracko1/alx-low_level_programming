#include "main.h"

/**
 * flip_bits - function that counts the number of bits to change
 * to get from one number to another
 * @n: the first number
 * @m: the second number
 * Return: the number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, bitcnt = 0;
	unsigned long int fresh;
	unsigned long int unique = n ^ m;

	for (k = 63; k >= 0; k--)
	{
	fresh = unique >> k;
	if (fresh & 1)
	bitcnt++;
	}
	return (bitcnt);
}
