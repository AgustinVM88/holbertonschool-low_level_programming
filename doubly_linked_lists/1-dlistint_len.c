#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - function that returns the number
 * of elements in a linked dlistint_t list.
 *
 * @h: Pointer to the first node in the list(head)
 *
 * Return: total numbers of nodes
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;

	}
	return (count);
}
