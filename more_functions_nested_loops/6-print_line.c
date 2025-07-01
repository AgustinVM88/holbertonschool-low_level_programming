#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: number of times the character '_' should be printed.
 *
 */
void print_line(int n)
{
	int a, b;

	a = n;
	b = 1;

	if (n > 0)
	{
		while (a >= b)
		{
			_putchar('_');
			b++;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');

}
