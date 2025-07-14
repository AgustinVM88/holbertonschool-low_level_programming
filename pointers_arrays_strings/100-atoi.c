#include "main.h"

/**
 * _atoi - converts a string to an integer
 *
 * @s: pointer to the string to convert
 *
 * Return: convert number(int), or 0 if it's not number
 *
 */
int _atoi(char *s)
{
	int x = 0, sign = 1, result = 0, found_digit = 0;

	while (s[x] != '\0')
	{
		/* Maneja los signos antes del numero*/
		if (s[x] == '-')
			sign *= -1;
		else if (s[x] == '+')
			;
		/*Si es un digito*/
		else if (s[x] >= '0' && s[x] <= '9')
		{
			found_digit = 1;
			result = result * 10 + (s[x] - '0');
		}
		/*Luego de un digito encuentra otro caraccter no numerico, cortamos */
		else if (found_digit)
			break;
		x++;
	}
	return (sign * result);
}
