#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * while second string is an n value
 * @s1: first string
 * @s2: second string
 * @n: the number of element to concatenate from s2
 * Return: a pointer to the new allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t y, b, a;
	char *q;

	if (s1 == NULL)
	y = 0;
	else
	{
	for (y = 0; s1[y] != '\0'; y++)
		;
	}
	if (s2 == NULL)
	b = 0;
	else
	{
	for (b = 0; s2[b] != '\0'; b++)
		;
	}
	b = n;
	q = malloc(sizeof(char) * (y + b + 1));
	if (q == NULL)
	return (NULL);
	for (a = 0; a < y; a++)
	q[a] = s1[a];
	for (a = 0; a < y; a++)
	q[a + 1] = s2[a];
	q[y + b] = '\0';
	return (q);
}
