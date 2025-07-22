#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * es_numero - Checks if a string contains only digits
 *
 * @s: String to check
 *
 * Return: 1 if it is a valid number, 0 if not
 *
 */
int es_numero(char *s)
{
	int x = 0;

	if (s[0] == '\0')
		return (0);

	while (s[x])
	{
		if (!isdigit(s[x]))
			return (0);
		x++;
	}
	return (1);
}

/**
 * main - Adds positive numbers passed as arguments
 *
 * @argc: number of arguments
 * @argv: vector of arguments
 *
 * Return: 0 if everything goes well, 1 if error
 *
 */
int main(int argc, char *argv[])
{
	int x, num, sum = 0;

	for (x = 1; x < argc; x++)
	{
		if (!es_numero(argv[x]))
		{
			printf("Error\n");
			return (1);
		}
		num = atoi(argv[x]);
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
