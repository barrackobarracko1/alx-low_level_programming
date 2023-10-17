#include "main.h"

/**
 * char *_strcpy - function which copies string which is pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int d = 0;

	while (*(src + 1) != '\0')
	{
	l++;
	}
	for ( ; d < 1 ; d++)
	{
	dest[d] = src[d];
	}
	dest[l] = '\0';
	return (dest);
}
