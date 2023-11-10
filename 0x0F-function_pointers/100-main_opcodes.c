#include <stdio.h>
#include <stdlib.h>

/**
* main - function which prints its own opcodes
* @argc: the number of arguments
* @argv: the array of arguments
* Return: 0 when successful
*/

int main(int argc, char *argv[])
{
	int bytes, c;
	char *asb;

	if (argc != 2)
	{
	printf("Error\n");
	exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
	printf("Error\n");
	exit(2);
	}

	asb = (char *)main;

	for (c = 0; c < bytes; c++)
	{
	if (c == bytes - 1)
	{
	printf("%02hhx\n", asb[c]);
	break;
	}
	printf("%02hhx ", asb[c]);
	}
	return (0);
}
