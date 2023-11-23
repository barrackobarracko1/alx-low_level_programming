#include "main.h"

/**
 * _pow - this function calculates (base ^ power)
 * @base: the base of the exponent
 * @power: the power of the exponent
 * Return: value of (base ^ power)
 */

unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int digit;
	unsigned int f;

	digit = 1;
	for (f = 1; f <= power; f++)
	digit *= base;
	return (digit);
}

/**
 * print_binary - function that prints number in binary notation
 * @n: the number to print
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int div, check;
	char flag;

	flag = 0;
	div = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
	check = n & div;
	if (check == div)
	{
	flag = 1;
	_putchar('1');
	}
	else if (flag == 1 || div == 1)
	{
	_putchar('0');
	}
	div >>= 1;
	}
}
