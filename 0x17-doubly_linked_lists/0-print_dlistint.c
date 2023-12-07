#include "lists.h"
/**
 * print_dlistint - prints nodes of a linkedlist.
 *
 *@h: head pointer.
 *
 *Return: Number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int num = 0;

	while (h != NULL)
	{
		if (h != NULL)
		{
			printf("%d\n", h->n);
		}
		h = h->next;
		num++;
	}
	return (num);
}
