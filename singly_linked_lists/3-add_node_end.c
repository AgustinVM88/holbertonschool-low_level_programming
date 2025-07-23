#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - Calculate the length of a string
 *
 * @s: String to measure
 *
 * Return: String length
 */
unsigned int _strlen(const char *s)
{
	unsigned int x = 0;

	while (s[x] != '\0')
		x++;
	return (x);
}

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 *
 * @head: Double pointer to the first node in the list
 * @str: String to duplicate in the new node
 *
 * Return: Address of the new node, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
