#include <stdlib.h>
#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - libera toda la memoria de una tabla
 *
 * @ht: puntero a la tabla
 *
 * Description: libera cada nodo, clave, valor,
 * array y la estructura de la tabla
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *node, *tmp;

	if (!ht)
		return;

	for (x = 0; x < ht->size; x++)
	{
		node = ht->array[x];
		while (node)
		{
			tmp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
