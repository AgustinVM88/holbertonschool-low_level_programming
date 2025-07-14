#include "main.h"

/**
 * _strcat - function that concatenates two strings
 *
 * @dest: destination string
 * @src: string add to the dest string
 *
 * Return: Pointer to the destination string(dest)
 *
 */
char *_strcat(char *dest, char *src)
{
	int x = 0, y = 0;

	/*Busca el final de dest */
	while (dest[x] != '\0')
		x++;
	/*Copia src al final de dest */
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	/*Agregar el caracter nulo a; final */
	dest[x] = '\0';
	return (dest);
}
