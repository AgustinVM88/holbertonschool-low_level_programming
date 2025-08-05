#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 *
 * @head: double pointer to the first node in the list
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
