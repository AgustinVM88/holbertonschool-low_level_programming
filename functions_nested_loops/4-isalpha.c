#include "main.h"

/**
 * _isalpha - Function that checks for lowercase character.
 * @c: Char to verify (ASCII)
 *
 * Return: 1 if it's a letter, 0 if otherwise.
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
