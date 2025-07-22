#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers
 *
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to the array, or NULL if it fails
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	/* reservar espacio para los punteros a filas */
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	/* reserva cada fila */
	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(sizeof(int) * width);
		if (grid[x] == NULL)
		{
			/* Libera todo lo anterior si falla*/
			for (y = 0; y < x; y++)
				free(grid[y]);
			free(grid);
			return (NULL);
		}
		/* inicializar la fila en 0 */
		for (y = 0; y < width; y++)
			grid[x][y] = 0;
	}
	return (grid);
}
