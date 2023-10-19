#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: input a value
 * @src: input a value
 * @n: input a value
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int q;

	q = 0;
	while (q < n && src[q] != '\0')
	{
		dest[q] = src[q];
		q++;
	}
	while (q < n)
	{
	dest[q] = '\0';
	q++;
	}
	return (dest);
}
