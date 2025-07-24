#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts
 * a new node at a given position.
 *
 * @h: pointer to the head pointer of the list
 * @idx: index where to insert the new node (starting from 0)
 * @n: new node data
 *
 * Return: address of the new node or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;
	unsigned int x = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (temp != NULL && x < idx - 1)
	{
		temp = temp->next;
		x++;
	}
	if (temp == NULL)
		return (NULL);

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	new->next = temp->next;
	new->prev = temp;

	temp->next->prev = new;
	temp->next = new;

	return (new);
}
