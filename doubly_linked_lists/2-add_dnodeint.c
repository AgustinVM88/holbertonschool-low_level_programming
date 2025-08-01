#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - function that adds a new node
 * at the beginning of a dlistint_t list.
 *
 * @head: double pointer to the first node in the list
 * @n: integer value to be saved in the new node
 *
 * Return: address of the new node, or NULL if it fails
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
		(*head)->prev = new;

	*head = new;

	return (new);
}
