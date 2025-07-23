#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - Calculate the length of a chain
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
 * add_node - function that adds a new node at the beginning of a list_t list.
 *
 * @head: Double pointer to the first node in the list
 * @str: Chain to duplicate in the new node
 *
 * Return: Address of the new node, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

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
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
