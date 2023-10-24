#include "lists.h"
/**
  * listint_len - prints the number of elements in a linkedlists.
  *
  *@h: pointer to the first node.
  *
  *Return: Return number of elements in a linked list.
  */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
