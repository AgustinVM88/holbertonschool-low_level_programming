#include "hash_tables.h"

/**
 * key_index - obtiene indice clave dentro del array de la tabla hash
 *
 * @key: clave para la cual se desea obtener el indice
 * @size: tamano del array de la tabla hash
 *
 * Return: indice en el array donde debe guardarse la clave
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
