#include "main.h"

/**
 * print_to_98 - function that prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: int that is reference
 *
 * Return: result(a + b).
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		_putchar(i + '0');
		_putchar(',');
		_putchar(' ');
		if (n > 10)
			_putchar(' ');
	}
	_putchar('\n');
}
