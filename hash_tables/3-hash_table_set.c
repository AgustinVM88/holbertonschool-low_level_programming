#include <stdlib.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_set - agrega o actualiz un elemento en la tabla
 *
 * @ht: puntero a la tabla
 * @key: la clave. no puede ser vacia
 * @value: el valor asociado a la clave. debe ser duplicado
 *
 * Return: 1 si tiene exito o 0 de lo contrario
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *tmp;

	if (!ht || !key || *key == '\0' || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			char *new_value = strdup(value);

			if (!new_value)
				return (0);
			free(tmp->value);
			tmp->value = new_value;
			return (1);
		}
		tmp = tmp->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (!new_node->key || !new_node->value)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
