#include "main.h"

/**
 * set_bit -will  set a bit at a given index to 1
 * @n: the pointer to the number to change
 * @index: the index of the bit to set to 1
 *
 * Return: On success return 1, -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
