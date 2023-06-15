#include <stdio.h>
#include "main.h"

/**
 * main - will print the name of the program
 * @argc: is the number of arguments
 * @argv: is the arrray of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
