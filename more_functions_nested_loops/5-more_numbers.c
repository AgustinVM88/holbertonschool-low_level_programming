#include "main.h"

/**
 * more_numbers - prints the numbers from 0 to 14, 10 times,
 * followed by a new line.
 *
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
				_putchar('1');
			_putchar((b % 10) + '0');
		}
		_putchar('\n');
	}

}
