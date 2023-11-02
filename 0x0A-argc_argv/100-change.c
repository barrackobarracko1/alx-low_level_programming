#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - function that prints the minimum number of coins to
 * make change for an amount of money
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0 when successful, 1 when there is error
 */

int main(int argc, char *argv[])

{
	int digit, z, outcome;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
	printf("Error\n");

	return (1);
	}
	digit = atoi(argv[1]);
	outcome = 0;
	if (digit < 0)
	{
	printf("0\n");
	return (0);
	}
	for (z = 0; z < 5 && digit >= 0; z++)
	{
	while (digit >= coins[z])
	{
	outcome++;
	digit -= coins[z];
	}
	}
	printf("%d\n", outcome);
	return (0);
}
