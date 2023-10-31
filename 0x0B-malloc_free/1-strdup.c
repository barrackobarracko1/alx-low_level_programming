#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - this duplicates to new memory space location
 * @str: char
 * Return: 0 when successful
 */

char *_strdup(char *str)
{
	char *asb;
	int k, p = 0;

	if (str == NULL)
	return (NULL);

	k = 0;
	while (str[k] != '\0')
	k++;
	asb = malloc(sizeof(char) * (k + 1));
	if (asb == NULL)
	return (NULL);

	for (p = 0; str[p]; p++)
	asb[p] = str[p];
	return (asb);
}
