#include "lists.h"
/**
  * free_listint2 - frees memory.
  *
  *@head: first node of a linked list.
  *
  *Return: Always 0.
  */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;

	if (*head == NULL)
	{
		return (NULL);
	}
	while (current != NULL)
	{
		listint_t *aux = current;

		current = current->next;
		free(aux);
	}
	*head = NULL;
}
