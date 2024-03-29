#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: is the character to print-out
 *
 * Return: On success return 1.
 * On error, return -1, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
