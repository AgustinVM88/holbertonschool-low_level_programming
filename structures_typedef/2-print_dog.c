#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct dog.
 *
 * @d: pointer to the struct dog to print
 *
 * If any of the elements is NULL, print (nil) instead.
 * If d is NULL, print nothing.
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	/* Imprime nombre */
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	/* Imprime edad */
	printf("Age: %f\n", d->age);
	/* Imprime dueÃo */
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);

}
