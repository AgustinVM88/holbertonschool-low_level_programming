#include "main.h"

/**
 * print_rev - function that prints a string in reverse, followed by a new line
 * @str: pointer to a string
 *
 */
void print_rev(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
		;
	for (x = x - 1; x >= 0; x--)
		_putchar(str[x]);
	_putchar('\n');
}
