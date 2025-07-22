#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 *
 * @b: bytes to asigned
 *
 * Return: pointer to allocated memory or terminates the program if it fails
 *
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
