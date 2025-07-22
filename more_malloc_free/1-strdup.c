#include <stdlib.h>
#include "main.h"

/**
 * _strdup - creates a duplicate copy of a string in new memory
 *
 * @str: string to copy
 *
 * Return: pointer to the new string, or NULL if it fails
 *
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int x, len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	for (x = 0; x <= len; x++)
		dup[x] = str[x];
	return (dup);
}
