#include "lists.h"

/**
  * print_listint - prints nodes of a linked list.
  *
  *@h: a pointer to a linked list to be printed.
  *
  *Return: Returns number of nodes.
  */
size_t print_listint(const listint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		if (h != NULL)
		{
			printf("%d\n", h->n);
		}
		h = h->next;
		len++;
	}
	return (len);
}
