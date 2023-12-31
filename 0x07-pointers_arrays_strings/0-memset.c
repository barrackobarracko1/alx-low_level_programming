#include "main.h"

/**
 * _memset - function that fill a block with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: bytes to be changed
 * Return: changed array with the new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
	s[x] = b;
	n--;
	}
	return (s);
}
