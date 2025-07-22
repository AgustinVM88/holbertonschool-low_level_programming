#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 *
 * @grid: pointer to array
 * @height: rows
 *
 */
void free_grid(int **grid, int height)
{
	int x;

	if (grid == NULL || height <= 0)
		return;
	/* Libera cada fila */
	for (x = 0; x < height; x++)
		free(grid[x]);
	/* libera el array de punteros */
	free(grid);
}
