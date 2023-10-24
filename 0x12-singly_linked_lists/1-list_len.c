#include "lists.h"
/**
  * list_len - return number of elements in a linkelist.
  *
  *@h: length of linked list.
  *
  *Return: return number of elements in a linkedlist.
  */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
