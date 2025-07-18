#include "main.h"

/**
 * _strstr - function that that locates a substring.
 *
 * @haystack: principal string
 * @needle: substring to locate
 *
 * Return: pointer to the start of the substring, or NULL if not found
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int x, y;

	if (*needle == '\0')
		return (haystack);

	for (x = 0; haystack[x] != '\0'; x++)
	{
		for (y = 0; needle[y] != '\0'; y++)
		{
			if (haystack[x + y] != needle[y])
				break;
		}
		if (needle[y] == '\0')
			return (&haystack[x]);
	}
	return (0);
}
