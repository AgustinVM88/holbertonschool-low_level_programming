#include "main.h"

/**
 * _strncat - function that concatenates two strings
 *
 * @dest: destination string
 * @src: string add to the dest string
 * @n: max number of character to copy
 *
 * Return: Pointer to the destination string(dest)
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	/*Busca el final de dest */
	while (dest[x] != '\0')
		x++;
	/*Copia como maximo n caracteres de src */
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	/*Agregar el caracter nulo ai final */
	dest[x] = '\0';
	return (dest);
}
