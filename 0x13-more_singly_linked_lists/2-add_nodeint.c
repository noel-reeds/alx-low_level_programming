#include "lists.h"
/**
  * add_nodeint - adds a note at the beginning of the linked list
  *
  *@head: first node of a linkedlist.
  *
  *@n: integer value or data to add to linked list.
  *
  *Return: Returns a pointer to the new node.
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *lk = malloc(sizeof(listint_t));

	lk->n = n;
	if (*head == NULL)
	{
		*head = lk;
		return (lk);
	}
	else if (lk == NULL)
	{
		return (NULL);
	}
	lk->next = *head;
	*head = lk;
	return (lk);
}
