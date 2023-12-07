#include "lists.h"
/**
 * dlistint_len - finds the number of elements in a linkedlist.
 *
 *@h: head pointer.
 *
 *Return: Number of nodes/elements in a linkedlist.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
