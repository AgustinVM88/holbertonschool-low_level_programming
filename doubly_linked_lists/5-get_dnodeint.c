#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a
 * dlistint_t linked list.
 *
 * @head: double pointer to the first node in the list
 * @index: index of the node to get (starting at 0)
 *
 * Return: pointer to the node at that position, or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;

	while (head != NULL)
	{
		if (x == index)
			return (head);

		head = head->next;
		x++;
	}
	return (NULL);
}
