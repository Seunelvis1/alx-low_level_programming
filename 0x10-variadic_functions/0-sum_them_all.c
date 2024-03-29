#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - will return the sum of all its paramters.
 * @n: is the number of paramters passed to function.
 * @...: is a variable number of paramters to calculate the sum.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
