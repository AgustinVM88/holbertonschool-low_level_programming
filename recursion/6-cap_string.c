#include "main.h"

/**
 * cap_string - function that capitalizes all words in a string
 *
 * @s: string to modify
 *
 * Return: pointer to the modified string
 *
 */
char *cap_string(char *s)
{
	int x = 0, y;
	char sep[] = " \t\n,;.!?\"(){}";

	if (s[x] >= 'a' && s[x] <= 'z')
		s[x] -= 32;

	while (s[x] != '\0')
	{
		for (y = 0; sep[y] != '\0'; y++)
		{
			if (s[x] == sep[y] && s[x + 1] >= 'a' && s[x + 1] <= 'z')
			{
				s[x + 1] -= 32;
				break;
			}
		}
		x++;
	}
	return (s);
}
