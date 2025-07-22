#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function that concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer ti the new string, or NULL if it's fails
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int x, y, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* Calcular longitudes */
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	/* reserva memoria para len1 + len2 + '\0' */
	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
		return (NULL);
	/* Copia s1*/
	for (x = 0; x < len1; x++)
		concat[x] = s1[x];
	/* Copia s2*/
	for (y = 0; y < len2; y++)
		concat[x + y] = s2[y];
	/* Terminar la cadena con el nulo */
	concat[x + y] = '\0';
	return (concat);
}
