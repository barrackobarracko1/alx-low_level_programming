#include "main.h"

/**
 * puts_half - prints half of string
 * @str: parameter to be printed
 * Return: void
 */

void puts_half(char *str)
{
	int p, w, count = 0;

	for (p = 0; str[p] != '\0' ; p++)
	count++;
	w = (count - 1) / 2;
	for (p = w + 1 ; str[p] != '\0' ; p++)
	_putchar('\n');
}
