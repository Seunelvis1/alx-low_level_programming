#include "main.h"
/**
 * _puts - will print a string, followed by a new line, to string
 * @str: is the string to print
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
