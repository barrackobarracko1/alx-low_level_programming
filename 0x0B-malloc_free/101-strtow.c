#include <stdlib.h>
#include "main.h"

/**
 * count_word - the helper function to count the number of words in a string
 * @s: the string to evaluate
 * Return: the number of words
 */
int count_word(char *s)
{
	int flag, o, d;

	flag = 0;
	d = 0;

	for (o = 0; s[o] != '\0'; o++)
	{
	if (s[o] == ' ')
	flag = 0;
	else if (flag == 0)
	{
	flag = 1;
	d++;
	}
	}
	return (d);
}

/**
 * **strtow - function which splits a string into words
 * @str: the string to split
 * Return: a pointer to an array of strings when successful
 * or NULL when an error occur
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int c, f = 0, len = 0, words, h = 0, begin, finish;

	while (*(str + len))
	len++;
	words = count_word(str);
	if (words == 0)
	return (NULL);
	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
	return (NULL);

	for (c = 0; c <= len; c++)
	{
	if (str[c] == ' ' || str[c] == '\0')
	{
	if (h)
	{
	finish = c;
	tmp = (char *) malloc(sizeof(char) * (h + 1));

	if (tmp == NULL)
	return (NULL);
	while (begin < finish)

	*tmp++ = str[begin++];
	*tmp = '\0';
	matrix[f] = tmp - h;
	f++;
	h = 0;
	}
	}
	else if (h++ == 0)
	begin = c;
	}
	matrix[f] = NULL;
	return (matrix);
}
