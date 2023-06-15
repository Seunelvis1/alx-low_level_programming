#include <stdio.h>
#include "main.h"

/**
 * main - will print all arguments it recieves
 * @argc: is the number of arguments
 * @argv: is the array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
