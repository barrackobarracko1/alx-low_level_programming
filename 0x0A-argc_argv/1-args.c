#include <stdio.h>
#include "main.h"

/**
 * main - function which prints the number of argument passed to the program
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0 when successful
 */

int main(int argc, char *argv[])

{
(void) argv; /*Ignore argv*/

	printf("%d\n", argc - 1);
	return (0);
}
