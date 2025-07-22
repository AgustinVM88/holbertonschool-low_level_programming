#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - frees the memory of a dog created with new_dog
 *
 * @d: pointer to the structure to be freed
 *
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
