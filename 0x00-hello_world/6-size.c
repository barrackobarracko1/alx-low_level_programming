#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 when successful
 */

int main(void)
{
	printf("size of a char: %lu byte(s)", sizeof(char));
	printf("size of int: %lu byte(s)", sizeof(int));
	printf("size of long int:%lu byte(s)", sizeof(long));
	printf("size of a long long int:%lu byte(s)", sizeof(long long));
	printf("size of a float: %lu byte(s)",sizeof(float));
	return (0);
}
