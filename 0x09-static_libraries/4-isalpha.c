#include "main.h"
		
/**
 * _isalpha - will check for alphabetic characters
 * @c: is the character to be checked
 * Return: 1 if c is a letter, 0 if c is not a letter
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
