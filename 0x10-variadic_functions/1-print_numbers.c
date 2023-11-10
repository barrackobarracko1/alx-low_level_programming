#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - this function print numbers, followed by a new line.
* @separator: The string to be printed between numbers.
* @n: The number of integers passed to the function.
* @...: A variable number of numbers to be printed.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int digit;

	va_start(nums, n);

	for (digit = 0; digit < n; digit++)
	{
	printf("%d", va_arg(nums, int));

	if (digit != (n - 1) && separator != NULL)
	printf("%s", separator);
	}

	printf("\n");
	va_end(nums);
}
