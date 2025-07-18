#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 *
 * @s: principal string
 * @accept: set of allowed characters
 *
 * Return: pointer to the first matching character in s,
 * or NULL if there is no match
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int x;


	while (*s != '\0')
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}
	return (0);
}
