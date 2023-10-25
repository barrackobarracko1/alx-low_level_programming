#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: the memory where it is stored
 * @src: memory where it is copied
 * @n: the number of bytes
 * Return: copied memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int d = 0;
	int l = n;

	for (; d < l; d++)
	{
	dest[d] = src[l];
	n--;
	}
	return (dest);
}
