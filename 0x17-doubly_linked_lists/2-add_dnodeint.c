#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of a list.
 *
 * head - head pointer
 *
 * n - data
 *
 *Return: Always 0.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
    temp->next = *head;
    *head->prev = temp;
    *head = temp;
	return (temp);
}
