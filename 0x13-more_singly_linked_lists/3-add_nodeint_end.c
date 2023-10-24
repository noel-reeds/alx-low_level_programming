#include "lists.h"
/**
  * add_nodeint_end - adds a node at the end of the linked list.
  *
  *@head: first node of the linked list.
  *
  *@n: integer value or data to be added.
  *
  *Return: Always a pointer to the new node.
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current = *head;
	listint_t *linkedlist = malloc(sizeof(listint_t));

	if (linkedlist == NULL)
	{
		return (NULL);
	}
	linkedlist->n = n;
	if (*head == NULL)
	{
		*head = linkedlist;
		return (linkedlist);
	}
	linkedlist->next = NULL;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = linkedlist;
	return (linkedlist);
}
