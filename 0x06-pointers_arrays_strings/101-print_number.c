#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer parameter
 * Return: always 0 when successful
 */

void print_number(int n)
{
	unsigned int b1;

	b1 = n;
	if (n < 0)
	{
	_putchar('-');
	b1 = -n;
	}
	if (b1 / 10 != 0)
	{
	print_number(b1 / 10);
	}
	_putchar((b1 % 10) + '0');
}
