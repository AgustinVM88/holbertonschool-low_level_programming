#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 *
 * @s: pointer to the string
 * @c: character to find
 *
 * Return: Pointer to the firs occurrence of the character 'c'
 * in the string(s) or NULL if the char is not found
 *
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	/* Si 'c' es '\0', lo devolvemos tambien */
	if (*s == c)
		return (s);
	return (0);
}
