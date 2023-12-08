#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at an index.
 *
 *@h: head pointer.
 *
 *@idx: index to insert a node.
 *
 *@n: node data.
 *
 *Return: Pointer to the newly inserted node or NULL if it fails.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;
	dlistint_t *insertnode = NULL;
	unsigned int i = 0, num = 0;

	if (h == NULL)
	{
		return (NULL);
	}
	temp = *h;
	if (idx == 0)
	{
		insertnode = add_dnodeint(h, n);
		return (insertnode);
	}
	while (temp != NULL)
	{
		num++;
		temp = temp->next;
	}
	if (idx >= num)
	{
		if (temp == NULL && idx == num)
			insertnode = add_dnodeint_end(h, n);
		return (insertnode);
	}
	temp = *h;
	while (i < idx - 1)
	{
		i++;
		temp = temp->next;
	}
	insertnode = malloc(sizeof(dlistint_t));
	if (insertnode == NULL)
		return (NULL);
	insertnode->n = n;
	insertnode->prev = temp->next->prev;
	insertnode->next = temp->next;
	temp->next = insertnode;
	temp->next->prev = insertnode;
	return (insertnode);
}
