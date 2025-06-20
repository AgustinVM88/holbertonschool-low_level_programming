#include "main.h"

/**
 * _islower - Function that checks for lowercase character.
 * @c: Char to verify (ASCII)
 *
 * Return: 1 is lowercase, 0 is uppercase.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
