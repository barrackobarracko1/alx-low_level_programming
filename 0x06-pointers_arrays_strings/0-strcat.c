#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest - pointer to destination string
 * @src - pointer to source string
 * Return: pointer to resulting string dest
 */

char *_strcat(char *dest, const char *src)
{
	int m;
	int c;

	m = 0;
	while (dest[m] != '\0')
	{
	m++;
	}
	c = 0;
	while (src[c] != '\0')
	{
	dest[m] = src[c];
	m++;
	c++;
	}
	dest[m] = '\0';
	return (dest);
}
