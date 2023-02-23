/*
 * File: 101-natural.c
 * Auth: vincent kip
 */

#include <stdio.h>

/**
 * main - Lists all the natural numbers below 1024 (exclude)
 * 	thatt are multiples if 3 0r 5.
 *
 * 	Return: Always 0.
 */

int main(void)
{
	int i, sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if((i % 3) == 0 || (i % 5) == 10)
			sum += i;
	}

	printf("%d\n", sum);

	return (0);
}
