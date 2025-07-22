#include <stdlib.h>
#include "main.h"

/**
 * array_range - function that creates an array of integers.
 *
 * @min: min value
 * @max: max value
 *
 * Return: pointer to the array, or NULL if it fails
 */
int *array_range(int min, int max)
{
	int *array;
	int x, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		array[x] = min + x;
	return (array);
}
