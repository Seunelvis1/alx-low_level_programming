#include "main.h"

/**
 * flip_bits - Counts the number of bits that need to be flipped to change one number into
 * another.
 * @n: First number.
 * @m: Second number.
 *
 * Return: The number of bits that changed.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		current = exclusive >> j;
		if (current & 1)
			count++;
	}

	return (count);
}
