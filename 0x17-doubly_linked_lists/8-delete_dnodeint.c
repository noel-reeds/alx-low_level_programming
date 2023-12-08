#include "lists.h"
/**
 * delete_dnodeint_at_index - delets a node at an index.
 *
 *@head: head pointer.
 *
 *@index: index of node to be deleted.
 *
 *Return: Always 1 for success and -1 for failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *delnode = *head;

	if (*head == NULL)
	{
		return (1);
	}
	if (index == 0)
	{
		*head = delnode->next;
		if (*head != NULL)
		{
			delnode->next->prev = NULL;
		}
		free(delnode);
		delnode = NULL;
		return (1);
	}
	while (i < index && delnode != NULL)
	{
		delnode = delnode->next;
		i++;
	}
	if (delnode == NULL)
		return (-1);
	delnode->prev->next = delnode->next;
	if (delnode->next != NULL)
		delnode->next->prev = delnode->prev;
	delnode->next->prev = delnode->prev;
	free(delnode);
	delnode = NULL;
	return (1);
}
