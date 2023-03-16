#include "main.h"
#include "main.h"

/**
 * _putchr - writes the character c to stout
 * @c: The character to print
 *
 * Return: On success 1.
 * Onerror, -1 is returned, and errnot is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
