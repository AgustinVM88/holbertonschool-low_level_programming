#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * in a linked list_t list
 *
 * @h: pointer to the first node
 *
 * Return: total numbers of nodes
 *
 */
size_t list_len(const list_t *h)
{
	size_t conut = 0;

	while (h != NULL)
	{
		conut++;
		h = h->next;
	}
	return (conut);
}
