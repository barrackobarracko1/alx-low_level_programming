#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * main - the main function
 * Return: 0 when successful
 */
int main(void)
{
printf("Size of int: %zu bytes\n", sizeof(int));
printf("Size of float: %zu bytes\n", sizeof(float));
printf("Size of double: %zu bytes\n", sizeof(double));
printf("Size of char: %zu byte\n", sizeof(char));
return 0;
}
