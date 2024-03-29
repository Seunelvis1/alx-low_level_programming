#include "main.h"

int actual_sqrt_recursion(int n, int i);

/*
 * _sqrt_recursion - Will return natural square root of any given number
 * @n: Is the number to calculate the square root
 *
 * Return: a resulting square root
 */

int _sqrt_recusrion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - will recurse to find the natural
 * square root of any number
 * @n: is the number to calculate the sqaure root of @i: iterator
 *
 * Return: the resulting sqaure root
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
