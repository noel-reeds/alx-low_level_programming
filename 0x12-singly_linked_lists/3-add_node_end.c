#include "lists.h"
/**
  * add_node_end - adds a node at the end of a linked list.
  *
  *@head: first node of a linked list.
  *
  *@str: refers to the linked list.
  *
  *Return: Returns a linkedlist with a newly added node.
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	list_t *linkedlist = malloc(sizeof(list_t));

	if (linkedlist == NULL)
	{
		return (NULL);
	}
	linkedlist->str = strdup(str);
	if (linkedlist == NULL)
	{
		return (NULL);
	}
	linkedlist->len = strlen(str);
	linkedlist->next = NULL;
	current = *head;
	if (*head == NULL)
	{
		*head = linkedlist;
		return (linkedlist);
	}
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = linkedlist;
	return (linkedlist);
}
