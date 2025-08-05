#include "hash_tables.h"

/**
 * hash_djb2 - implementa el algoritmo de hashing djb2
 *
 * @str: string (clave) a convertir en hash
 *
 * Return: valor hash calculado
 *
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;

	}
	return (hash);
}
