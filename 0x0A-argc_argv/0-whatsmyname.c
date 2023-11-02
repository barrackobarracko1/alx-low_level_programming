#include <stdio.h>
#include "main.h"

/**
 * main - this prints the name of the program
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0 when successful
 */

int main(int argc __attribute__((unused)), char *argv[])

{
	printf("%s\n", *argv);
	return (0);
}
