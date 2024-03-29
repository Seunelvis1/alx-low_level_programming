#include <stdio.h>
	#include <stdlib.h>
	#include <ctype.h>
	#include <string.h>
	/**
	 * check_num - check - string there are digit
	 * @str: array str
	 *
	 * Return: Always 0 (Success)
	 */
	int check_num(char *str)
	{
		/*Declare variables*/
		unsigned int count;


		count = 0;
		while (count < strlen(str)) /*counting of  string*/


		{
			if (!isdigit(str[count])) /*check if str are digit*/
			{
				return (0);
			}


			count++;
		}
		return (1);
	}


	/**
	 * main - will print the name of the program
	 * @argc: is count arguments
	 * @argv: Arguments
	 *
	 * Return: Always 0 (Success)
	 */


	int main(int argc, char *argv[])


	{


		/*variables Declarations*/
		int count;
		int str_to_int;
		int sum = 0;


		count = 1;
		while (count < argc) /*runs through the whole array*/
		{
			if (check_num(argv[count]))


			{
				str_to_int = atoi(argv[count]); /*ATOI --> convert string to int*/
				sum += str_to_int;
			}


			/*Condition if one of the number contains symbols that are not digits*/
			else
			{
				printf("Error\n");
				return (1);
			}


			count++;
		}


		printf("%d\n", sum); /*prints sum*/


		return (0);
	}


