#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct hash_node_s - nodo tabla hash
 *
 * @key: clave (unica)
 * @value: valor asociado
 * @next: siguiente nodo en caso de colision
 *
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Tabla hash
 *
 * @size: tamaño del array
 * @array: array de punteros a nodos
 *
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);


#endif /* HASH_TABLES_H */
