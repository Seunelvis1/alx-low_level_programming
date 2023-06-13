#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - will check if a string is a palindrome
 * @s: it the string to reverse
 *
 * Return: 1 if true, 0 it is not.
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - will return the length if it's a string
 * @s: Is the string to calculate the length of
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal -will check the characters recursively for palindrome
 * @s: is the string to check
 * @i: is the iterator
 * @len: is the length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */

int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
