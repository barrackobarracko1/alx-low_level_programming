#include "main.h"

/**
 * _strchr - Entry point of code
 * @s: input
 * @c: input
 * Return: 0 when successful
 */

char *_strchr(char *s, char c)
{
	int k = 0;

	for (; s[k] >= '\0'; k++)
	{
	if (s[k] == c)
	return (&s[k]);
	}
	return (0);
}
