#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure representing a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: structure to store basic information about a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Prototipo de la duncion init_dog */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
