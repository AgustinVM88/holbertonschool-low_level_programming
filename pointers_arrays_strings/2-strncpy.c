#include "main.h"

/**
 * _strncpy - function that copies a string
 *
 * @dest: destination string
 * @src: string add to the dest string
 * @n: max number of character to copy
 *
 * Return: Pointer to the destination string(dest)
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (x < n)
	{
		if (src[x] != '\0')
			dest[x] = src[x];
		else
			break;
		x++;
	}
	/* Rellena el resto con '\0' si src termino antes de n */
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
