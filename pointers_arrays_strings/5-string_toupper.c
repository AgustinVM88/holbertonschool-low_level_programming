#include "main.h"

/**
 * string_toupper - function that converts all lowercase letters
 * in a string to uppercase
 *
 * @s: pointer to a string
 *
 * Return: pointer to the modified string
 *
 */
char *string_toupper(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		if (s[x] > 'a' && s[x] <= 'z')
			s[x] = s[x] - 32;
		x++;
	}
	return (s);
}
