#include "main.h"
/**
 *_memcpy - is the  function that copies memory area
 *@dest: is the memory where it is stored
 *@src: is the memory where it is copied
 *@n: is the number of bytes
 *
 *Return: will return copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;


	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
