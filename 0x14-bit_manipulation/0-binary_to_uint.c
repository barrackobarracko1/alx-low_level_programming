#include "main.h"

/**
 * binary_to_uint - a function that converts binary number to unsigned int.
 * @b: a pointer to string containing binary number
 * Return: unsigned int with decimal value of binsry number, or 0 if it fails
 */

unsigned int binary_to_uint(const char *b)
{
	int g;
	unsigned int digit;

	digit = 0;
	if (!b)
	return (0);
	for (g = 0; b[g] != '\0'; g++)
	{
	if (b[g] != '0' && b[g] != '1')
	return (0);
	}
	for (g = 0; b[g] != '\0'; g++)
	{
	digit <<= 1;
	if (b[g] == '1')
	digit += 1;
	}
	return (digit);
}
