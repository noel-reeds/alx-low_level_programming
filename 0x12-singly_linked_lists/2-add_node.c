#include "lists.h"
/**
  * add_node - adds a node at the beginning of a linked list.
  *
  *@head: first node of a linked list.
  *
  *@str: refers to the linked list.
  *
  *Return: Returns a linkedlist with a newly added node.
  */

list_t *add_node(list_t **head, const char *str)
{
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
	linkedlist->next = *head;
	*head = linkedlist;
	return (linkedlist);
}
