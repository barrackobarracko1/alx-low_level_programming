#include "main.h"
#include <stddef.h>

/**
 * _strstr - This locates a substring.
 * @haystack: string to be searched
 * @needle: The substring to be located
 * Return: If the substring is located - a pointer to the
 *starting of the substring located
 * If the substring is not located - NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int f, j;

	for (f = 0; haystack[f] != '\0'; f++)
	{
	for (j = 0; needle[j] != '\0'; j++)
	{
	if (haystack[f + j] != needle[j])
	{
	break;
	}
	}
	while (needle[j] == '\0')
	{
	return (&haystack[f]);
	}
	}
	return (NULL);
}
