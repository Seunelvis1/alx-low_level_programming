#include "main.h"
/**
 * _strncat - will concatenate two strings
 * using at most n bytes from the src
 * @dest: is the input value
 * @src: is the input value
 * @n: is the input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;


	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
