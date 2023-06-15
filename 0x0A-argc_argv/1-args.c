#include <stdio.h>
#include "main.h"

/**
 * main - will print the number of arguments passed to the program
 * @argc: is the number of arguments
 * @argv: is the arrays of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argc; /*ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
