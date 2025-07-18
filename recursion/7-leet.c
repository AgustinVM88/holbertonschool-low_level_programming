#include "main.h"

/**
 * leet - function that encodes a string in 1337
 *
 * @s: string to modify
 *
 * Return: pointer to the modified string
 *
 */
char *leet(char *s)
{
	int x, y;
	char let[] = "aAeEoOtTlL";
	char code[] = "4433007711";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (s[x] == let[y])
				s[x] = code[y];
		}
	}
	return (s);
}
