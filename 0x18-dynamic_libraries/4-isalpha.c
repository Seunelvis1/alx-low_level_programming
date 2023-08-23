#include "main.h"

/**
 * _isalphabet - checks for alphebetic character
 * @c: the chracter to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
