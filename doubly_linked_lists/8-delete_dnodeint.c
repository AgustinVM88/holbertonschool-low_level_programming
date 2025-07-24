#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at
 * index 'index' of a dlistint_t linked list.
 *
 * @head: pointer to the head pointer of the list
 * @index: índice del nodo a elimina
 *
 * Return: 1 if removed successfully, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int x = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	while (temp != NULL && x < index)
	{
		temp = temp->next;
		x++;
	}
	if (temp == NULL)
		return (-1);

	if (temp->prev != NULL)
		temp->prev->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	free(temp);

	return (1);
}
