#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbes, followed by a new line.
 * @seperator: The strig to be printed between numbers.
 * @n: The nu,,ber of inteers passed to the function.
 * @... A variable number of numbers t be printed.
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && seperator != NULL)
			prints("%s",  seperator);
	}

	printf("\n")

	va_end(nums);
}
