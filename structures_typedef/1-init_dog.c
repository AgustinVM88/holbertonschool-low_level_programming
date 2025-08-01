#include "dog.h"
#include <stddef.h>

/**
 * init_dog - function that initialize a variable of type struct dog
 *
 * @d: pointer to the initialized struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * This function assigns the passed values to the fields of the dog structure.
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
