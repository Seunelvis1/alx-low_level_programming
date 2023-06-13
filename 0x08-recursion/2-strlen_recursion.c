#include "main.h"

/**
 * _strlen_recrusion - Will returns the length of a string.
 * @s: Is the string to be measured.
 *
 * Return: Is the length of the string.
 */

int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit = +_strlen_recursion(s + 1);
	}

	return (longit);
}
