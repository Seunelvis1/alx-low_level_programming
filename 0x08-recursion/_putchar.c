#include "main.h"
#include <unistd.h>

/**
 * _putchar - will write the character c to stdout
 * @c: is the character to print
 *
 * Return: On Success 1.
 * On error, -1 is returned, and errno will be set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
