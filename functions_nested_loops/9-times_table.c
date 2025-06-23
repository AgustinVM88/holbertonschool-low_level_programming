#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i, j, producto;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			producto = i * j;

			/* Imprimir espacio si no es el primer número de la fila */
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');

				if (producto < 10)
					_putchar(' ');
			}

			if (producto >= 10)
			{
				_putchar((producto / 10) + '0');
				_putchar((producto % 10) + '0');
			}
			else
			{
				_putchar(producto + '0');
			}
		}
		_putchar('\n');
	}
}
