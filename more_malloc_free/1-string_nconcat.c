#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 * @n: maximum number of bytes to concatenate from s2
 *
 * Return: pointer to the new string, or NULL if it fails malloc
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int x, y, len1 = 0, len2 = 0, total_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* calcula longitud de s1 y s2 */
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	/* Si n es mayor o igual a len2, usar todo s2 */
	if (n >= len2)
		n = len2;
	/* total de memoria a reservar = len1 + n + 1 para '\0' */
	total_len = len1 + n;

	new_str = malloc(sizeof(char) * (total_len + 1));
	if (new_str == NULL)
		return (NULL);
	/* Copiar s1 a new_str */
	for (x = 0; x < len1; x++)
		new_str[x] = s1[x];
	/* Copia n caracteres de s2 */
	for (y = 0; y < n; y++)
		new_str[x + y] = s2[y];
	/* Agrega NULL al terminar */
	new_str[x + y] = '\0';
	return (new_str);
}
