#include "main.h"

/**
 * factorial - will return the factorial of a number
 * @n: is the designated number to return the factorial from
 *
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
