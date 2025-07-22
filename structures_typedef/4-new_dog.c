#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dog.h"

/**
 * _strdup - duplicate a string.
 *
 * @str: string to duplicat
 *
 * Return: Pointer to the new copy or NULL if it's fails
 *
 */
char *_strdup(const char *str)
{
	char *copy;
	size_t len, x;

	if (str == NULL)
		return (NULL);
	len = 0;

	while (str[len] != '\0')
		len++;

	copy = malloc(len + 1);
	if (copy == NULL)
		return (NULL);

	for (x = 0; x < len; x++)
		copy[x] = str[x];
	copy[x] = '\0';
	return (copy);
}

/**
 * new_dog - creates a new dog struct
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: age of the dog
 *
 * Return: pointer to the new dog or NULL if it's fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	new->name = _strdup(name);
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	new->owner = _strdup(owner);
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	new->age = age;
	return (new);
}
