#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line
 * @str: pointer to a string
 *
 */
void puts_half(char *str)
{
	int x, y;

	while (str[x] != '\0')
		x++;
	if (x % 2 == 0)
		y = x / 2;
	else
		y = (x + 1) / 2;
	while (str[y] != '\0')
	{
		_putchar(str[y]);
		y++;
	}
	_putchar('\n');
}
