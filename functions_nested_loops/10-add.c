#include "main.h"

/**
 * add - function that adds two integers and returns the result.
 */
int add(int, int)
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
