#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - crea una tabla hash vacia.
 *
 * @size: tamano del array
 *
 * Return: puntero a la tabla hash creada o NULL si falla
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int x;

	if (size == 0)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	/* Inicializamos todos los punteros del array a NULL*/
	for (x = 0; x < size; x++)
		ht->array[x] = NULL;

	return (ht);
}
