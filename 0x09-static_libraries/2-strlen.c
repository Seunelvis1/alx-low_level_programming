#include "main.h"
/**
 * _strlen - will return the length of a string
 * @s: is the string
 * Return: length
 */
int _strlen(char *s)
{
	int longi = 0;


	while (*s != '\0')
	{
		longi++;
		s++;
	}


	return (longi);
}
