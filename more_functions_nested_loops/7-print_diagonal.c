#include "main.h"

/**
 * print_diagonal - function that draws a straight line in the terminal
 * @n: number of times the character '\' should be printed.
 *
 */
void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		for (y = 0; y < n; y++)
		{
			for (x = 0; x < y; x++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');

}
