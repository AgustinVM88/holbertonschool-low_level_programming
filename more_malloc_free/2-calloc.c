#include <stdlib.h>
#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc.
 *
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to the new allocated memory, or NULL if it's fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int total_size, x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	for (x = 0; x < total_size; x++)
		ptr[x] = 0;
	return ((void *)ptr);
}
