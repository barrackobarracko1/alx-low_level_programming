#include "main.h"

/**
 * get_endianness - this program checks the endianness
 * Return: 0 if a big endian, 1 if a little endian
 */

int get_endianness(void)
{
	int j;
	char *z;

	j = 1;
	z = (char *)&j;
	return (*z);
}

