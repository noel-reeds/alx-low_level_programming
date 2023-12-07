#include "lists.h"
/**
 * free_dlistint - frees a linkedlist
 *
 *@head: head pointer
 *
 *Return: Always 0.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		dlistint_t *tp = temp;

		temp = temp->next;
		free(tp);
	}
}
