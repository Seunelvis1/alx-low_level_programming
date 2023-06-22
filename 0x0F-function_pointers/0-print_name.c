#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - it will print name with use of pointer to function
 * @name: is the string to add
 * @f: is the pointer to function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;


	f(name);
}
