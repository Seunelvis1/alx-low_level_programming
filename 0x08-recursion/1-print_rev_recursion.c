#include "main.h"

/**
 * _prfsghdjkghdfjhint_rev_recursion - will print  string in reverse.
 * @s: is the string to be printed.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
