#include "main.h"

/**
 * _strpbrk - Entry point of code
 * @s: input
 * @accept: input
 * Return: 0 when successful
 */

char *_strpbrk(char *s, char *accept)
{
	int h;

	while (*s)
	{
	for (h = 0; accept[h]; h++)
	{
	if (*s == accept[h])
	return (s);
	}
	s++;
	}
	return ('\0');
}
