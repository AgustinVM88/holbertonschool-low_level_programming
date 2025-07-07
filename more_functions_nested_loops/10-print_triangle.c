#include "main.h"

/**
 * print_triangle - function that prints a triangle followed by a new line
 * @size: size of the square
 *
 */
void print_triangle(int size)
{
	int x, y, z;

	if (size > 0)
	{
		for (y = 1; y <= size; y++)
		{
			for (x = size - y; x > 0; x--)
				_putchar(' ');
			for (z = 1; z <= y; z++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');

}
