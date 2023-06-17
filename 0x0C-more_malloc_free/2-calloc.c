#include <stdlib.h>
#include "main.h"

/**
 * *_memset - will fill memory with a constant byte
 * @s: is the memory area to be filled
 * @b: is the char to copy
 * @n: is the number of times to copy b
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - will allocate memory for array
 * @nmemb: is the number of elements in the array
 * @size: is the size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}

