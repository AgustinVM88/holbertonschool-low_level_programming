#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring..
 *
 * @s: principal string
 * @accept: set of allowed characters
 *
 * Return: number of consecutive initial characters in s that are in accept
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y, encontrado;


	for (x = 0; s[x] != '\0'; x++)
	{
		encontrado = 0;

		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				encontrado = 1;
				break;
			}
		}
		if (encontrado == 0)
			break;
	}
	return (x);
}
