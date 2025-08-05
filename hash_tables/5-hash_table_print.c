#include <stdlib.h>
#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - imprime el contenido de la tabla
 *
 * @ht: puntero a la tabla
 *
 * Description: imprime los pares claves/valor en el orden
 * del array y las listas enlazadas
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *node;
	int first = 1;

	if (!ht)
		return;

	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		node = ht->array[x];
		while (node)
		{
			if (!first)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			first = 0;
			node = node->next;
		}
	}
	printf("}\n");
}
