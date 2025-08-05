#include <stdlib.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_get - recupera el valor asociado a una clave
 *
 * @ht: puntero a la tabla
 * @key: la clave
 *
 * Return: puntero al valor asociado o NULL si no
 *
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (!ht || !key || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
