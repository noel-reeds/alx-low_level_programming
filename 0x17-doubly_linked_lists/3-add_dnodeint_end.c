#include "lists.h"
/**
 * add_dnodeint_end - adds a node at the end.
 *
 *@head: head pointer
 *
 *@n: node data.
 *
 *Return: Pointer to the newly added node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *iter = *head;
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	while (iter->next != NULL)
	{
		iter = iter->next;
	}
	iter->next = temp;
	temp->prev = iter;
	return (temp);
}
