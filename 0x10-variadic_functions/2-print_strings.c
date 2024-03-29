#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: is the string to be printed between the strings.
 * @n: The number of strings passed to the function.
 * If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);
	for (index = 0; index < n; index++)
	{
	str = va_arg(strings, char *);
	if (str == NULL)
	printf("(nil)");
	else
	printf("%s", str);
	if (index != (n - 1) && separator != NULL)
	printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}

