#include <stdlib.h>

/**
 * create_array - creates an array of chars initialized with a specific character
 *
 * @size: size of the array
 * @c: character with which the array will be filled
 *
 * Return: pointer to array, or NULL if it fails or size == 0
 *
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int x;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		array[x] = c;
	return (array);
}
