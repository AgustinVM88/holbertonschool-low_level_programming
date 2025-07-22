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

/**
 * dog_t - new name for struct dog
 */
typedef struct dog dog_t;

/* Prototipo de la duncion init_dog */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
