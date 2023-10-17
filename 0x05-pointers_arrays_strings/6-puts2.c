#include "main.h"

/**
 * puts2 - out of two characters, function should print only one
 * starting with the first one
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int longi = 0;
	int s = 0;
	char *k = str;
	int a;

	while (*k != '\0')
	{
	k++;
	longi++;
	}
	s = longi - 1;
	for (a = 0 ; a <= s ; a++)
	{
	if (a % 2 == 0)
	{
	_putchar(str[a]);
	}
	}
	_putchar('\n');
}
