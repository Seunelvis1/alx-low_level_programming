#include "main.h"
/**
 * _atoi - will convert a string into an integer.
 *
 * @s: is the string to use.
 *
 * Return: an integer.
 */
int _atoi(char *s)
{
 	int sign = 1, i = 0;
 	unsigned int res = 0;


 	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
 	{
 		if (s[i] == '-')
 			sign *= -1;
 		i++;
 	}
 	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
 	{
 		res = (res * 10) + (s[i] - '0');
 		i++;
 	}
 	res *= sign;
 	return (res);
}
