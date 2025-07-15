#include "main.h"

/**
 * _memset - function that fill memory with a constant byte
 *
 * @s: pointer destination string
 * @b: constant byte to be used to fill
 * @n: number of bytes to fill
 *
 * Return: Pointer to the destination string(s)
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;
	return (s);
}
