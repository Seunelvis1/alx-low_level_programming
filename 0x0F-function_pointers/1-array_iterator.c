#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator -will  print each array element on a new line
 * @array: array
 * @size: is the number of element to print
 * @action: is the pointer to print in regular or hex
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
