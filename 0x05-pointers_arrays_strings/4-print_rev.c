#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string
 * Return: 0 when successful
 */

void print_rev(char *s)
{
	int longi = 0;
	int v;

	while (*s != '\0')
	{
	longi++,
	s++;
	}
	s--;
	for (v = longi; v > 0; v--)
	{
	_putchar(*s);
	s--;
	}
	_putchar('\n');
}
