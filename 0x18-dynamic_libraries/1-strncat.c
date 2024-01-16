#include "main.h"

/**
 * _strncat - concatenates two strings.
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int f;
	int m;

	f = 0;
	while (dest[f] != '\0')
	{
	f++;
	}
	m = 0;
	while (m < n && src[m] != '\0')
	{
	dest[f] = src[m];
	m++;
	f++;
	}
	dest[f] = '\0';
	return (dest);
}
