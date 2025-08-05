#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data
 * (n) of a dlistint_t linked list.
 *
 * @head: pointer to the first node in the list
 *
 * Return: total sum of the values, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
