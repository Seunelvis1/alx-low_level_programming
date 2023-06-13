#include "main.h"

/**
 * wildcmp - Compares strings
 * @s1: is pointer to string params
 * @s2: is the pointer to string params
 * Return: 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '=')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}

	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
