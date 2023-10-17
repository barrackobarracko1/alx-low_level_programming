#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that creates valid random
 * password for the programm 101-crackme
 * Return: 0
 */

int main(void)
{
	int pass[100];
	int f, sum, z;

	sum = 0;

	srand(time(NULL));
	for (f = 0; f < 100; f++)
	{
	pass[f] = rand() % 78;
	sum += (pass[f] + '0');
	putchar(pass[f] + '0');
	if ((2772 - sum) - '0' < 78)
	{
	z = 2772 - sum - '0';
	sum += z;
	putchar(z + '0');
	break;
	}
	}
	return (0);
}
