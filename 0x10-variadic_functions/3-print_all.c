#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - function that prints anything
* @format: this lists the types of arguments passed to the function
*/

void print_all(const char * const format, ...)
{
	int o = 0;
	char *asb, *lcy = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
	while (format[o])
	{
	switch (format[o])
	{
	case 'c':
	printf("%s%c", lcy, va_arg(list, int));
	break;
	case 'i':
	printf("%s%d", lcy, va_arg(list, int));
	break;
	case 'f':
	printf("%s%f", lcy, va_arg(list, double));
	break;
	case 's':
	asb = va_arg(list, char *);
	if (!asb)
	asb = "(nil)";
	printf("%s%s", lcy, asb);
	break;
	default:
	o++;
	continue;
	}
	lcy = ", ";
	o++;
	}
	}

	printf("\n");
	va_end(list);
}
