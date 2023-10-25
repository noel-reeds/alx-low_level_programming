#include "lists.h"
/**
  * int pop_listint - deletes the first node of a linked list.
  *
  *@head: Firsst node of a linkedlist.
  *
  *Return: returns the head nodes data (n).
  */
int pop_listint(listint_t **head)
{
	int data = 0;

	if (*head != NULL)
	{
		listint_t *aux = *head;
		data = aux->n;
		*head = (*head)->next;
		free(aux);
		return (data);
	}
	return (0);
}
