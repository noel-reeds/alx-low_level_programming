#include "lists.h"
/**
  * free_listint - frees memory.
  *
  *@head: first node of a linked list.
  *
  *Return: Always 0.
  */
void free_listint(listint_t *head)
{
	listint_t *current = head;

	while (current != NULL)
	{
		listint_t *aux = current;

		current = current->next;
		free(aux);
	}
}
