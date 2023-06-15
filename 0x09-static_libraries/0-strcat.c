#include "main.h"
 /**
 * _strcat - will concatenate two or more strings
 * @dest: is the input value
 * @src: is the input value
 *
 * Return: void	
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;


	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}		


	dest[i] = '\0';
	return (dest);
}
