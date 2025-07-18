#include "main.h"

/**
 * _memcpy - function that copy a memory area
 *
 * @dest: pointer destination string
 * @src: source pointer
 * @n: number of bytes to copy
 *
 * Return: Pointer to the destination string(dest)
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];
	return (dest);
}
