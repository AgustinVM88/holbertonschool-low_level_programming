#include "main.h"

/**
 * puts2 - function that prints every character of a string,
 * starting with the first character, followed by a new line
 * @str: pointer to a string
 *
 */
void puts2(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x += 2;
	}
	_putchar('\n');
}
