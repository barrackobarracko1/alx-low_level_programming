#include "main.h"
#include <stdlib.h>

/**
 * argstostr - the main entry
 * @ac: int input
 * @av: the double pointer array
 * Return: 0 when successful
 */

char *argstostr(int ac, char **av)
{

	int s, w, m = 0, a = 0;
	char *str;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (s = 0; s < ac; s++)
	{
	for (w = 0; av[s][w]; w++)

	a++;
	}
	a += ac;
	str = malloc(sizeof(char) * a + 1);

	if (str == NULL)
	return (NULL);

	for (s = 0; s < ac; s++)
	{
	for (w = 0; av[s][w]; w++)
	{
	str[m] = av[s][w];
	m++;
	}
	if (str[m] == '\0')
	{
	str[m++] = '\n';
	}
	}
	return (str);
}
