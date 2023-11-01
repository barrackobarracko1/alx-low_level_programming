#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: The concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *cont;
	int g, mp;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";
	g = mp = 0;
	while (s1[g] != '\0')
	g++;

	while (s2[mp] != '\0')
	mp++;
	cont = malloc(sizeof(char) * (g + mp + 1));
	if (cont == NULL)
	return (NULL);
	g = mp = 0;
	while (s1[g] != '\0')
	{
	cont[g] = s1[g];
	g++;
	}
	while (s2[mp] != '\0')
	{
	cont[g] = s2[mp];
	g++, mp++; }
	cont[g] = '\0';
	return (cont);
}
