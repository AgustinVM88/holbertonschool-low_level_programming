#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals of
 * a square matrix of integers.
 *
 * @a: pointer to the first position of the array (stored linearly)
 * @size: matrix size (number of rows or columns)
 *
 */
void print_diagsums(int *a, int size)
{
	int x, sum1 = 0, sum2 = 0;

	for (x = 0; x < size; x++)
	{
		sum1 += a[x * size + x];              /* Diagonal principal*/
		sum2 += a[x * size + (size - 1 - x)]; /* Diagonal secundaria*/
	}
	printf("%d, %d\n", sum1, sum2);
}
