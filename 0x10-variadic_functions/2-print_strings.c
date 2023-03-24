#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints, followed by a new line.
 * @seperator: The string to be printed between strings.
 * @n: The numbers of strings to be printed.
 *
 * Destruction: if seperator is NULL, it is not printed.
 * if one of the string is NULL, (nil) is printed instead.
 */

void print_strings(const char *seperator, cosnt unsigned int n, ...)
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

		if (index != (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}

	printf('\n");

	va_end(strings);
}
