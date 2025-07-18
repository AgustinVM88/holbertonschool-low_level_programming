#include "main.h"

/**
 * print_chessboard - function function that prints the chessboard.
 *
 * @a: 8x8 matrix of characters representing the board
 *
 *
 */
void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0; x < 8; x++) /* Filas */
	{
		for (y = 0; y < 8; y++) /* Columnas */
			_putchar(a[x][y]);
		_putchar('\n'); /* Nueva linea al final de cada fila */
	}
}
