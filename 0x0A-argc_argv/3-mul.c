#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */

int _atoi(char *s)

{
	int e, v, g, asb, q, index;

	e = 0;
	v = 0;
	g = 0;
	asb = 0;
	q = 0;
	index = 0;

	while (s[asb] != '\0')

	asb++;
	while (e < asb && q == 0)
	{
	if (s[e] == '-')

	v++;
	if (s[e] >= '0' && s[e] <= '9')

	{
	index = s[e] - '0';
	if (v % 2)

	index = -index;
	g = g * 10 + index;
	q = 1;
	if (s[e + 1] < '0' || s[e + 1] > '9')
	break;
	q = 0;
	}
	e++;
	}
	if (q == 0)
	return (0);
	return (g);
}

/**
 * main -function that multiplies two numbers
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0 when successful, 1 when error
 */

int main(int argc, char *argv[])
{

	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{

	printf("Error\n");

	return (1);

	}
	num1 = _atoi(argv[1]);

	num2 = _atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
